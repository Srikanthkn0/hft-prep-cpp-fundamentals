#include <iostream>
#include <string>

struct student
{
    char name[50];
    int age;
    char grade[5];
};

int main()
{
    std::cout << "Enter the number of students; ";
    int n;
    std::cin >> n;
    student stu[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter student " << i + 1 << " details:" << std::endl;
        std::cout << "Name: ";
        std::cin.ignore();
        std::cin.getline(stu[i].name, 50);
        std::cout << "Age: ";
        std::cin >> stu[i].age;
        std::cout << "Grade: ";
        std::cin >> stu[i].grade;
    }
    std::cout << "---------------Student Details---------------" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Student: " << i + 1 << std::endl;
        std::cout << "Name: " << stu[i].name << std::endl;
        std::cout << "Age: " << stu[i].age << std::endl;
        std::cout << "Grade: " << stu[i].grade << std::endl;
    }
    return 0;
}