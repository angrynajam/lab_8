
using namespace std;
#include <string>

//Task one

class base{
	protected:
		int a;
	public:
		void display();
};

class derived:public base{
	public:
		void display();
};


//Task two

class base2{
	protected:
		int a,b,c,d;
	public:
		base2();
		base2(int);
		base2(int, int);
		void display();
		~base2();
};

class derived2:public base2{
	public:
		void display();
		derived2(int);
		derived2(int,int);
		~derived2();
};

//Task three
class student{
	private:
		string name;
		int age;
		string gender;
	public:
		void input();
		void display();
};

class result:public student{
	private:
		int totalMarks;
		float percentage;
		char grade;
	public:
		void put();
		void get();
};

//Task 4
class person{
	public:
		person();
		void talk();
		void walk();
		void eat();
};

class mathsTeacher:public person{
	public:
		mathsTeacher();
		void teach();
};

class footballPlayer:public person{
	public:
		footballPlayer();
		void play();
};

class businessman:public person{
	public:
		businessman();
		void doBusiness();
};


//Task 5

class publication{
	private:
		string title;
		float price;
	public:
		void getData();
		void putData();
};

class book:public publication{
	private:
		int pageCount;
	public:
		void getData();
		void putData();
};

class tape:public publication{
	private:
		float playingTime;
	public:
		void getData();
		void putData();
};

