#include <iostream>
#include <vector>
#include <string>

class Student {
    static int count;
    int id;
    std::string name;

public:
    Student(const std::string& name_) : name(name_) {
        ++count;
        id = count;
    }

    static int getCount() {
        return count;
    }

    int getId() const {
        return id;
    }

    std::string getName() const {
        return name;
    }
};

int Student::count = 0;

int main() {
    std::vector<Student> students;
    students.emplace_back("Alice");
    students.emplace_back("Bob");
    students.emplace_back("Charlie");

    std::cout << "Registered students:\n";
    for (const auto& s : students) {
        std::cout << "ID: " << s.getId()
                  << ", Name: " << s.getName() << '\n';
    }

    std::cout << "Total number of students: "
              << Student::getCount() << '\n';

    return 0;
}
