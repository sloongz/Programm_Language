#include <iostream>

class Student {
	public:
		char *name;
		int age;
		float score;
		void say() {
			std::cout<<"name:"<<name<<"\tage:"<<age<<"\tscore:"<<score<<std::endl;
		}   
	private:
};


int main()
{
	int *var = new int;
	int *arr = new int[10];
	Student *stu1 = new Student;

	*var = 1;
	for (int i=0; i<10; i++) {
		*(arr+i) = i;
	}

	stu1->name = "lilei";
	stu1->age = 10;
	stu1->score = 100;

	std::cout << "var:" << *var << std::endl;
	std::cout<<"arr:";
	for (int i=0; i<10; i++) {
		std::cout <<arr[i] << " ";
	}
	std::cout<<std::endl;
	stu1->say();

	delete var;
	delete[] arr;
	delete stu1;

	return 0;
}
