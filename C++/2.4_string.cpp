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

	//访问字符串中的字符
	for (unsigned int i=0; i<s4.length(); i++) {
		cout<<s4[i]<<" ";
	}
	cout<<endl;


	//字符串的拼接
	string s5 = s1 + s4;
	string s6 = s1 + 'A';
	cout<<"s5: "<<s5<<"\ts6: "<<s6<<endl;

	//插入字符串
	s4.insert(6, s1);
	cout<<"insert: "<<s4<<endl;
	s4.insert(6, "abcde ");
	cout<<"insert: "<<s4<<endl;

	//删除字符串
	s4.erase(6, 4);
	cout<<"erase: "<<s4<<endl;
	s4.erase(5);
	cout<<"erase: "<<s4<<endl;

	//提取子字符串
	s4 = "hello world";
	cout<<"s4: "<<s4<<endl;
	string s7 = s4.substr(6,6);
	cout<<"pick: "<<s7<<endl;

	//字符串查找
	string s8 = "worl";
	unsigned int index = s4.find(s8);	
	if(index < s4.length())
		cout<<"find at index : "<< index <<endl;
	else
		cout<<"Not found"<<endl;

	index = s4.find(s8,5);	
	if(index < s4.length())
		cout<<"find at index : "<< index <<endl;
	else
		cout<<"Not found"<<endl;

	index = s4.rfind(s8,5);	
	if(index < s4.length())
		cout<<"find at index : "<< index <<endl;
	else
		cout<<"Not found index: "<<index<<endl;

	index = s4.find_first_of(s8);
	if(index < s4.length())
		cout<<"find at index : "<< index <<endl;
	else
		cout<<"Not found index: "<<index<<endl;


	return 0;
}
