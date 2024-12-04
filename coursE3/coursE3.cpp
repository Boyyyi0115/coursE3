#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
	Person person1("A123456789", "Chen", "Jason", "M", "1999-01-01");

	Person* person2 = new Person();
	person2->setId("H123456789");
	person2->setLastName("劉");
	person2->setFirstName("柏邑");
	person2->setGender("男");
	person2->setBirthDate("2006-01-15");

	person1.display();
	cout << endl;
	person2->display();
}