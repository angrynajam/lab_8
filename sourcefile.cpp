
#include <iostream>
#include <string>
#include "headerfile.h"

using namespace std;

//Task one
void base::display(){
	cout<<"I am display function of base class. "<<endl;
}

void derived::display(){
	cout<<"i am display function of the derived class. "<<endl;
}

//Task two

base2::base2(){
	cout<<"i am default constructor of base class. "<<endl;
}

base2::base2(int x){
	a = x;
	b = c = d = 0;
	cout<<"i am one argument constructor of base class. "<<endl;
	cout<<"Data values are: "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}

base2::base2(int x, int y){
	a = x;
	b = y;
	c = d = 0;
	cout<<"i am two argument constructor of base class. "<<endl;
	cout<<"Data values are: "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}

base2::~base2(){
	cout<<"I am destructor of base class"<<endl;
}

void base2::display(){
	cout<<"i am base class display function."<<endl;
}

derived2::derived2(int x):base2(x){
	cout<<"I am one argument constructor of derived class"<<endl;
}

derived2::derived2(int x, int y):base2(x, y){
	cout<<"I am two argument constructor of derived class"<<endl;
}

void derived2::display(){
	cout<<"i am display function of the derived class. "<<endl;
}

derived2::~derived2(){
	cout<<"I am destructor of derived class"<<endl;
}

//Task three

void student::input(){
	cout<<"Enter Name of the student: ";
	getline(cin, name);
	cout<<"Enter age of the student: ";
	cin>>age;
	cout<<"Enter gender of the student: ";
	cin.ignore();
	getline(cin, gender);
}

void student::display(){
	cout<<"Name: "<<name<<" Age: "<<age<<" Gender: "<<gender<<endl;
}


void result::put(){
	cout<<"Enter total marks of the student: ";
	cin>>totalMarks;
	cout<<"Enter grade of the student: ";
	cin>>grade;
	cout<<"Enter percentage of the student: ";
	cin>>percentage;
}

void result::get(){
	cout<<endl<<"Total marks: "<<totalMarks<<endl<<"Grade: "<<grade<<endl<<"Percentage: "<<percentage<<endl;
}

//Task four
person::person(){
	cout<<"person created"<<endl;
}

void person::talk(){
	cout<<"I am person and i can talk. "<<endl;
}
void person::walk(){
	cout<<"I am person and i can walk. "<<endl;
}
void person::eat(){
	cout<<"I am person and i can eat. "<<endl;
}

footballPlayer::footballPlayer(){
	cout<<"footballer created"<<endl;
}
void footballPlayer::play(){
	cout<<"I am a person but a footballer too. Thats why i can also play football. "<<endl;
}
mathsTeacher::mathsTeacher(){
	cout<<"maths teacher created"<<endl;
}
void mathsTeacher::teach(){
	cout<<"I am a person but a maths teacher too. Thats why i can also Teach Maths. "<<endl;
}
businessman::businessman(){
	cout<<"businessman created"<<endl;
}
void businessman::doBusiness(){
	cout<<"I am a person but a businessman too. Thats why i can also Teach Maths. "<<endl;
}

//Task 5

void publication::putData(){
	cout<<"Enter the title: ";
    getline(cin, title);
	cout<<"Enter the price: ";
	cin>>price;
}

void publication::getData(){
	cout<<"Title: "<<title<<endl;
	cout<<"Price: "<<price<<endl;
}

void book::putData(){
	cout<<"Enter the page count: ";
	cin>>pageCount;
}

void book::getData(){
	cout<<"Page Count: "<<pageCount<<endl;
}

void tape::putData(){
	cout<<"Enter playing audio time: ";
	cin>>playingTime;
}

void tape::getData(){
	cout<<"playing audio time: "<<playingTime<<endl;
}
