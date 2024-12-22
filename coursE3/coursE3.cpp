#include <string>
#include <iostream>
#include <vector>
//#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"

#include "Record.h"
#include "Utility.h"
#include "coursE3.h"
#include "Person.h"
using namespace std;

// 新增全域變數來儲存學生、老師、課程、選課紀錄的資料
vector<Student> students;
vector<Teacher> teachers;
vector<Course> courses;
vector<Record> records;

int main()
{
	initializeData();
	displayMenu();
}

void initializeData()
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

	//Student student1("A123456789", "陳", "小明", "男", "1999-01-01", "S001", Department::ComputerSciece, ClassName::_1A);
	//student1.display();

	//cout << endl;
	//Course course1("C001", "C++ Programming", "這門課程教授C++程式語言");
	//Course course2("C002", "Java Programming", "這門課程教授Java程式語言");
	//Course course3("C003", "Python Programming", "這門課程教授Python程式語言");
	//course1.display();
	//course2.display();
	//course3.display();

	//vector<Course> teacher1_courses = { course1, course2, course3 };

	//Teacher teacher1("T123456789", "王", "大富", "男", "1980-7-1", "T001", Department::ComputerSciece, ClassName::_1A, teacher1_courses);

	//cout << "----------------" << endl;
	//teacher1.display();

	// 新增5筆課程資料
	courses.push_back(Course("C001", "C++ Programming", "這門課程教授C++程式語言"));
	courses.push_back(Course("C002", "Java Programming", "這門課程教授Java程式語言"));
	courses.push_back(Course("C003", "Python Programming", "這門課程教授Python程式語言"));
	courses.push_back(Course("C004", "C# Programming", "這門課程教授C#程式語言"));
	courses.push_back(Course("C005", "Visual Basic Programming", "這門課程教授Visual Basic程式語言"));

	// 新增5筆學生資料
	students.push_back(Student("S001", "劉", "柏邑", "男", "2006-01-15", "H001", Department::ComputerSciece, ClassName::_1A));
	students.push_back(Student("S002", "林", "小華", "男", "1999-02-02", "H002", Department::ElectricalEngineering, ClassName::_1A));
	students.push_back(Student("S003", "黃", "小美", "女", "1999-03-03", "H003", Department::InformationManagement, ClassName::_1B));
	students.push_back(Student("S004", "張", "小強", "男", "1999-04-04", "H004", Department::ComputerSciece, ClassName::_2A));
	students.push_back(Student("S005", "李", "小花", "女", "1999-05-05", "H005", Department::ElectronicEngineering, ClassName::_2B));

	// 新增2筆老師資料
	vector<Course> teacher1_courses = { courses[0], courses[1], courses[2] };
	teachers.push_back(Teacher("S101", "陳", "定宏", "男", "1980-7-1", "T001", Department::ComputerSciece, ClassName::_1A, teacher1_courses));
	vector<Course> teacher2_courses = { courses[3], courses[4] };
	teachers.push_back(Teacher("S102", "張", "弘德", "男", "1985-5-5", "T002", Department::InformationManagement, ClassName::_1B, teacher2_courses));

	// 新增10筆選課紀錄
	records.push_back(Record("S001", "C001"));
	records.push_back(Record("S001", "C002"));
	records.push_back(Record("S002", "C001"));
	records.push_back(Record("S002", "C003"));
	records.push_back(Record("S003", "C002"));
	records.push_back(Record("S003", "C003"));
	records.push_back(Record("S004", "C003"));
	records.push_back(Record("S004", "C004"));
	records.push_back(Record("S005", "C004"));
	records.push_back(Record("S005", "C005"));
}

void displayMenu() {
	int choice;
	do {
		cout << "=========================" << endl;
		cout << "1. 列出學生資料" << endl;
		cout << "2. 列出課程資料" << endl;
		cout << "3. 列出教師資料" << endl;
		cout << "4. 列出選課紀錄" << endl;
		cout << "5. 查詢學生資料" << endl;
		cout << "6. 查詢課程資料" << endl;
		cout << "7. 查詢教師資料" << endl;
		cout << "8. 查詢選課紀錄" << endl;
		cout << "9. 新增學生資料" << endl;
		cout << "10. 新增課程資料" << endl;
		cout << "11. 新增教師資料" << endl;
		cout << "12. 新增選課資料" << endl;
		cout << "0. 退出" << endl;
		cout << "請選擇操作: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "列出學生資料" << endl;
			liststudent();
			system("pause");
			break;
		case 2:	
			cout << "列出課程資料" << endl;
			listcourse();
			system("pause");
			break;
		case 3:
			cout << "列出教師資料" << endl;
			listteacher();
			system("pause");
			break;
		case 4:
			cout << "列出選課資料" << endl;
			listrecord();
			system("pause");
			break;
		case 5:
			cout << "查詢學生資料" << endl;
			querystudent();
			break;
		case 6:
			cout << "查詢課程資料" << endl;
			querycourse();
			system("pause");
			break;
		case 7:
			cout << "查詢教師資料" << endl;
			queryteacher();
			system("pause");
			break;
		case 8:
			cout << "查詢選課紀錄" << endl;
			queryrecord();
			system("pause");
			break;
		case 9:
			cout << "新增學生資料" << endl;
			addstudent();
			system("pause");
			break;
		case 10:
			cout << "新增課程資料" << endl;
			addcourse();
			system("pause");
			break;
		case 11:
			cout << "新增教師資料" << endl;
			addteacher();
			system("pause");
		case 12:
			cout << "新增選課資料" << endl;
			addrecord();
			system("pause");
		case 0:
			cout << "退出" << endl;
			break;
		default:
			cout << "無效選擇" << endl;
			break;
		}
	} while (choice != 0);
}

void listrecord()
{
	cout << "選課紀錄總共有" << records.size() << "筆" << endl;
	for (auto record : records) {
		record.display();
		cout << endl;
	}
	cout << endl;
}

void listteacher()
{
	cout << "教師資料總共有" << teachers.size() << "筆" << endl;
	for (auto teacher : teachers) {
		teacher.display();
		cout << endl;
	}
	cout << endl;
}

void listcourse()
{
	cout << "課程資料總共有" << courses.size()<<"筆"<<endl;
	for (auto course : courses) {
		course.display();
		cout << endl;
	}
	cout << endl;
}

void liststudent()
{
	cout << "學生資料總共有" << students.size() << "筆" << endl;
	for (auto student : students) {
		student.display();
		cout << endl;
	}
	cout << endl;
}

void querystudent()
{
	string studentId;
	cout << "請輸入學號: ";
	cin >> studentId;

	bool found = false;
	for (auto student : students) {
		if (student.getStudentId() == studentId) {
			student.display();
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "找不到學號為" << studentId << "的學生" << endl;
	}
	system("pause");
}

void querycourse(){
	string courseId;
	cout << "請輸入課程代碼: ";
	cin >> courseId;

	bool found = false;
	for (auto course : courses) {
		if (course.getCourseId() == courseId) {
			course.display();
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "找不到課程代碼為" << courseId << "的課程" << endl;
	}
	system("pause");
}

void queryteacher(){
	string teacherId;
	cout << "請輸入教師教師編號: ";
	cin >> teacherId;

	bool found = false;
	for (auto teacher : teachers) {
		if (teacher.getTeacherId() == teacherId) {
			teacher.display();
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "找不到教師編號為" << teacherId << "的教師" << endl;
	}
	system("pause");
}

void queryrecord(){
	int recordId;
	cout << "請輸入選課代碼: ";
	cin >> recordId;

	bool found = false;
	for (auto record : records) {
		if (record.getRecordId() == recordId) {
			record.display();
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "找不到選課代碼為" << recordId << "的課程" << endl;
	}
	system("pause");
}

void addstudent()
{
	string id, lastName, firstName, birthDate, gender, studentId;
	int departmentChoice, classNameChoice;

	cout << "身分證字號: ";
	cin >> id;
	cout << "姓: ";
	cin >> lastName;
	cout << "名: ";
	cin >> firstName;
	cout << "性別： ";
	cin >> gender;
	cout << "生日: ";
	cin >> birthDate;
	cout << "學號: ";
	cin >> studentId;

	cout << "科系: " << endl;
	for (int i = 0; i < static_cast<int>(Department::last); i++) {
		cout << i << ". " << Utility::toString(static_cast<Department>(i)) << endl;
	}
	cout << "請選擇科系: ";
	cin >> departmentChoice;
	Department department = static_cast<Department>(departmentChoice);

	cout << "班級: " << endl;
	for (int i = 0; i < static_cast<int>(ClassName::last); i++) {
		cout << i << ". " << Utility::toString(static_cast<ClassName>(i)) << endl;
	}
	cout << "請選擇班級: ";
	cin >> classNameChoice;
	ClassName className = static_cast<ClassName>(classNameChoice);

	students.push_back(Student(id, lastName, firstName, gender, birthDate, studentId, department, className));
}

void addcourse()
{
	string courseId, courseName,courseDescription;
	cout << "課程代碼:";
	cin >> courseId;
	cout << "課程名稱:";
	cin >> courseName;
	cout << "課程簡介:";
	cin >> courseDescription;
	courses.push_back(Course(courseId, courseName, courseDescription));
}

void addrecord()
{
	string recordId, studentId, courseId, recordDate;
	cout << "選課序號:";
	cin >> recordId;
	cout << "學號:";
	cin >> studentId;
	cout << "課程代碼:";
	cin >> courseId;
	cout << "選課日期:";
	cin >> recordDate;
	records.push_back(Record(studentId, courseId));
}

void addteacher()
{
	string id, lastName, firstName, birthDate, gender, teacherId;
	int classNameChoice, departmentChoice, teachingCoursesChoice;
	cout << "身分證字號: ";
	cin >> id;
	cout << "姓: ";
	cin >> lastName;
	cout << "名: ";
	cin >> firstName;
	cout << "性別： ";
	cin >> gender;
	cout << "生日: ";
	cin >> birthDate;
	cout << "教師編號:";
	cin >> teacherId;
	cout << "教師所屬科系:";
	for (int i = 0; i < static_cast<int>(Department::last); i++) {
		cout << i << ". " << Utility::toString(static_cast<Department>(i)) << endl;
	}
	cout << "請選擇科系: ";
	cin >> departmentChoice;
	Department department = static_cast<Department>(departmentChoice);
	cout << "教師所授班級:";
	for (int i = 0; i < static_cast<int>(ClassName::last); i++) {
		cout << i << ". " << Utility::toString(static_cast<ClassName>(i)) << endl;
	}
	cout << "請選擇班級: ";
	cin >> classNameChoice;
	ClassName className = static_cast<ClassName>(classNameChoice);
	teachers.push_back(Teacher(id, lastName, firstName, gender, birthDate, teacherId, department, className));
}