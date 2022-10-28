#include <iostream>
#include "review.h"
#include <vector>

int assignGrades() {
    std::cout << "First, enter the number of graded assignments you have: " << std::endl;
    int num;
    std::cin >> num;
    std::vector<int> grades(num);
    int sum = 0;
    for (int i = 0; i < num; i++) {
        std::cout << "Enter the grade you recieved on assingment " << i + 1 << ": " << std::endl;
        int grade;
        std::cin >> grade;
        grades.push_back(grade);
        sum += grade;
    }
    sum = sum / num;
    return sum;
    
}

int labGrades() {
    std::cout << "Next, enter the number of graded labs you have: " << std::endl;
    int num;
    std::cin >> num;
    std::vector<int> grades(num);
    int sum = 0;
    for (int i = 0; i < num; i++) {
        std::cout << "Enter the grade you recieved on lab " << i + 1 << ": " << std::endl;
        int grade;
        std::cin >> grade;
        grades.push_back(grade);
        sum += grade;
    }
    sum = sum / num;
    return sum;
    
}

int weightGetter(Student &student) {
    std::vector<float> weights;
    std::cout << "Enter the weights of the grade categories in decimal format in the following order: Assignments, Labs, Project, and Final Exam: ";
    float x;
    for (int i = 0; i < 4; i++) {
        std::cin >> x;
        weights.push_back(x);
    }

    float finalGrade = ((weights[0] * student.assignments)+(student.labs * weights[1])+(student.projects * weights[2])+(student.finals * weights[3]));
    return finalGrade;
}

void analyzer(Student student) {
    std::cout << "Thank you for all of the information. Analyzing student... " << std::endl;
    std::vector<float> compare;
    compare.push_back(student.assignments);
    compare.push_back(student.labs);
    compare.push_back(student.projects);
    compare.push_back(student.finals);
    float max = 0;
    float min = 101;
    for (int i = 0; i < 4; i++) {
        if (compare[i] > max) {
            max = i;
        }
        if (compare[i] < min) {
            min = i;
        }
    }

std::cout << "Your final grade is " << student.finalGrade << "! " << std::endl;
std::cout << "Your assignment average is " << student.assignments << std::endl;

if (min == 0) {
    std::cout << "Your lowest scoring category was in assignments. We reccomend you begin working on assignments earlier. Additionally, make sure to plan assignments thoroughly before you start programming." << std::endl;
}

if (min == 1) {
    std::cout << "Your lowest scoring category was in labs. It is important to show up to every lab, as specific instructions are often given in class. If you are struggling, don't be afraid to ask help from a TA." << std::endl;
}

if (min == 2) {
    std::cout << "Your lowest scoring category was in projects. Projects are usually a cumilation of concepts, so revisiting lecture slides and smaller assignments can prepare you for projects. A thorough planning process is required for projects." << std::endl;
}

if (min == 3) {
    std::cout << "It seems like you struggled the most on the final. Some students struggle with tests, so the best way to improve is to understand how you learn. Find out what works for you and create a studying plan. Review all lecture slides and find points of weakness! " << std::endl;
}

if (student.finalGrade >= 90) {
    std::cout << "Overall, you received an A in the class! This is something to be very proud of, and you should keep up the good work in your following courses!" << std::endl;
}

else if (student.finalGrade >= 80) {
    std::cout << "A B is a good grade, but there is still room for improvement. Finetune your prorgramming skills for your next course!" << std::endl;

}

else if (student.finalGrade >= 70) {
    std::cout << "You can do better than a C! Spend more time per week studying and programming!" << std::endl;
}
else {
    std::cout << "It looks like you'll have to retake the course. Better luck next time!" << std::endl;
}

}

int main() {
    Student student;

    std::cout << "Welcome to Student Analyzer 3000! What is your name?" << std::endl;
    std::string name;
    std::cin >> name;
    student.name(name);
    std::cout << "Nice to meet you, " << student.names << "!" << std::endl;

    student.assignments = assignGrades();
    student.labs = labGrades();

    std::cout << "Now, enter the grade you recieved on your final project: " << std::endl;
    std::cin >> student.projects;

    std::cout << "Finally, enter the grade you recieved on your final exam: " << std::endl;
    std::cin >> student.finals;

    student.finalGrade = weightGetter(student);
    std::cout << student.finalGrade << std::endl;

    analyzer(student);
}
