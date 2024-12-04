#include <iostream>
#include <string>
//#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "Utility.h"
#include "coursE3.h"
using namespace std;

int main()
{
	//Person person1("A123456789", "Chen", "Jason", "M", "1999-01-01");

	//Person* person2 = new Person();
	//person2->setId("B987654321");
	//person2->setLastName("Wang");
	//person2->setFirstName("David");
	//person2->setGender("M");
	//person2->setBirthDate("1999-12-31");

	//person1.display();
	//cout << endl;
	//person2->display();

	Student student1("A123456789", "劉", "柏邑", "男", "2006-01-15", "S008", Department::ComputerSciece, ClassName::_1A);
	student1.display();

	cout << endl;
	Course course1("C001", "C++ Programming", "這門課程教授C++程式語言");
	Course course2("C002", "Java Programming", "這門課程教授Java程式語言");
	Course course3("C003", "Python Programming", "這門課程教授Python程式語言");
	//course1.display();
	//course2.display();
	//course3.display();

	vector<Course> teacher1_courses = { course1, course2, course3 };

	Teacher teacher1("T123456789", "陳", "定宏", "男", "1980-7-1", "T001", Department::ComputerSciece, ClassName::_1A, teacher1_courses);

	cout << "----------------" << endl;
	teacher1.display();
}