#include <iostream>
#include <stdexcept> // ��� ���������
#include <unordered_map> // ��� ������������ unordered_map
#include <string>

// ���� ��� ������ � ������������ ������ ���������
class VectorUInt {
private:
    unsigned int* data; // �������� �� ����� ����������� ����� �����
    size_t size; // ʳ������ �������� � ������
    int codeError; // ��� �������
    
public:
    // ������������

    // ����������� ��� ���������
    VectorUInt() {
        size = 1;
        data = new unsigned int[size];
        data[0] = 0;
        codeError = 0;
    }

    // ����������� � ����� ���������� - ����� �������
    VectorUInt(size_t s) {
        size = s;
        data = new unsigned int[size];
        for (size_t i = 0; i < size; ++i) {
            data[i] = 0;
        }
        codeError = 0;
    }

    // ����������� � ����� ����������� - ����� ������� �� �������� �����������
    VectorUInt(size_t s, unsigned int value) {
        size = s;
        data = new unsigned int[size];
        for (size_t i = 0; i < size; ++i) {
            data[i] = value;
        }
        codeError = 0;
    }

    // ����������� ���������
    VectorUInt(const VectorUInt& other) {
        size = other.size;
        data = new unsigned int[size];
        for (size_t i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
        codeError = other.codeError;
    }

    // ����������
    ~VectorUInt() {
        delete[] data;
    }

    // �������������� ���������

    // ����� �������� �� ��������� ++ �� --
    VectorUInt& operator++() {
        for (size_t i = 0; i < size; ++i) {
            ++data[i];
        }
        return *this;
    }

    VectorUInt operator++(int) {
        VectorUInt temp(*this);
        operator++();
        return temp;
    }

    VectorUInt& operator--() {
        for (size_t i = 0; i < size; ++i) {
            --data[i];
        }
        return *this;
    }

    VectorUInt operator--(int) {
        VectorUInt temp(*this);
        operator--();
        return temp;
    }

    // ������ ������ !
    bool operator!() {
        return size != 0;
    }

    // ������ ������� ~
    VectorUInt operator~() {
        VectorUInt result(*this);
        for (size_t i = 0; i < size; ++i) {
            result.data[i] = ~result.data[i];
        }
        return result;
    }

    // ������� ������������ -
    VectorUInt operator-() {
        VectorUInt result(*this);
        for (size_t i = 0; i < size; ++i) {
            int signedValue = static_cast<int>(result.data[i]);
            signedValue = -signedValue;
            result.data[i] = static_cast<unsigned int>(signedValue);
        }
        return result;
    }

    // �������� ��������� =
    VectorUInt& operator=(const VectorUInt& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new unsigned int[size];
            for (size_t i = 0; i < size; ++i) {
                data[i] = other.data[i];
            }
            codeError = other.codeError;
        }
        return *this;
    }

    // ��������� +=, -=, *=, /=, %=, |=, ^=, &= (�����)
    VectorUInt& operator+=(const VectorUInt& other) {
        if (size != other.size) {
            throw std::invalid_argument("Vectors must be of the same size for addition");
        }
        for (size_t i = 0; i < size; ++i) {
            data[i] += other.data[i];
        }
        return *this;
    }

    VectorUInt& operator-=(const VectorUInt& other) {
        if (size != other.size) {
            throw std::invalid_argument("Vectors must be of the same size for subtraction");
        }
        for (size_t i = 0; i < size; ++i) {
            data[i] -= other.data[i];
        }
        return *this;
    }

    // ���������� ����� ��������� +, -, *, /, %
    VectorUInt operator+(const VectorUInt& other) const {
        if (size != other.size) {
            throw std::invalid_argument("Vectors must be of the same size for addition");
        }
        VectorUInt result(*this);
        result += other;
        return result;
    }

    // �������� ��������� ==
    bool operator==(const VectorUInt& other) const {
        if (size != other.size) {
            return false;
        }
        for (size_t i = 0; i < size; ++i) {
            if (data[i] != other.data[i]) {
                return false;
            }
        }
        return true;
    }

    // �������� ���������� []
    unsigned int& operator[](size_t index) {
        if (index >= size) {
            codeError = 1;
            index = size - 1;
        }
        return data[index];
    }

    // ����� ������� ��� ����� �� ������
    friend std::ostream& operator<<(std::ostream& os, const VectorUInt& vec);
    friend std::istream& operator>>(std::istream& is, VectorUInt& vec);
};

// ������� ��� ������ �� �����
std::ostream& operator<<(std::ostream& os, const VectorUInt& vec) {
    os << "[ ";
    for (size_t i = 0; i < vec.size; ++i) {
        os << vec.data[i] << " ";
    }
    os << "]";
    return os;
}

std::istream& operator>>(std::istream& is, VectorUInt& vec) {
    for (size_t i = 0; i < vec.size; ++i) {
        is >> vec.data[i];
    }
    return is;
}

// ���� ��� ����������� �������
class AssociativeEntity {
private:
    std::unordered_map<std::string, std::string> associations;
    int codeError;

public:
    // ����������� �� �������������
    AssociativeEntity() : codeError(0) {}

    // ��������� ����������� �������
    void addAssociation(const std::string& entity1, const std::string& entity2) {
        associations[entity1] = entity2;
    }

    // �������������� ��������� ���������� []
    std::string& operator[](const std::string& entity) {
        if (associations.find(entity) == associations.end()) {
            codeError = 1;
            static std::string emptyString;
            return emptyString;
        }
        return associations[entity];
    }

    // �������-�������� ������� ()
    std::string& operator()(const std::string& entity) {
        return (*this)[entity];
    }

    // ����� ������� ��� ������ �� �����
    friend std::istream& operator>>(std::istream& is, AssociativeEntity& ae);
    friend std::ostream& operator<<(std::ostream& os, const AssociativeEntity& ae);
};

// ������� ��� ������ �� �����
std::istream& operator>>(std::istream& is, AssociativeEntity& ae) {
    std::string entity1, entity2;
    std::cout << "Enter entity1: ";
    is >> entity1;
    std::cout << "Enter entity2: ";
    is >> entity2;
    ae.addAssociation(entity1, entity2);
    return is;
}

std::ostream& operator<<(std::ostream& os, const AssociativeEntity& ae) {
    for (const auto& association : ae.associations) {
        os << association.first << " -> " << association.second << std::endl;
    }
    return os;
}

// ������� �������
int main() {
    int choice;

    // ��������� ���� �� ���� ��������
    std::cout << "Choose an operation:\n"
        << "1. Vector Operations\n"
        << "2. Associative Entity\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
    case 1: {
        std::cout << "Vector Operations\n";

        // ������ ������� ��� �������
        VectorUInt vec1;
        std::cout << "vec1: " << vec1 << std::endl;

        VectorUInt vec2(5);
        std::cout << "vec2: " << vec2 << std::endl;

        VectorUInt vec3(3, 10);
        std::cout << "vec3: " << vec3 << std::endl;

        VectorUInt vec4 = vec3;
        std::cout << "vec4: " << vec4 << std::endl;

        ++vec3;
        std::cout << "vec3 after ++: " << vec3 << std::endl;

        --vec4;
        std::cout << "vec4 after --: " << vec4 << std::endl;

        std::cout << "!vec3: " << !vec3 << std::endl;

        VectorUInt vec5 = ~vec3;
        std::cout << "vec5 after ~: " << vec5 << std::endl;

        VectorUInt vec6 = -vec3;
        std::cout << "vec6 after -: " << vec6 << std::endl;

        vec1 = vec3;
        std::cout << "vec1 after =: " << vec1 << std::endl;

        vec1 += vec3;
        std::cout << "vec1 after +=: " << vec1 << std::endl;

        VectorUInt vec7 = vec3 + vec4;
        std::cout << "vec7 after +: " << vec7 << std::endl;
        break;
    }
    case 2: {
        std::cout << "Associative Entity\n";

        // ������ ������� ��� ����������� �������
        AssociativeEntity ae;

        ae.addAssociation("FlightNumber", "DepartureTime");
        ae.addAssociation("BusNumber", "DepartureTime");

        std::cout << "Associations:\n" << ae << std::endl;

        std::cout << "Departure time for FlightNumber: " << ae["FlightNumber"] << std::endl;

        std::cout << "Departure time for BusNumber: " << ae("BusNumber") << std::endl;
        break;
    }
    default:
        std::cout << "Invalid choice!\n";
        break;
    }

    return 0;
}
