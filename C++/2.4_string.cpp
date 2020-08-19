#include <iostream>
#include <string>

using namespace std;

int main()
{
	//定义
	string s1 = "c++";
	string s2 = s1;
	string s3('x', 5);
	cout<<"s1: "<<s1<<endl;
	cout<<"s2: "<<s2<<endl;
	cout<<"s3: "<<s3<<endl;

	string s4 = "hello world";
	int len = s4.length();
	cout<<"s4: "<<s4<<" len: "<<len<<endl;

	const char *str = s1.c_str();
	cout<<"c str:"<<str<<endl;

	for (unsigned int i=0; i<s4.length(); i++) {
		cout<<s4[i]<<" ";
	}
	cout<<endl;

	return 0;
}
