C++
[教程](http://c.biancheng.net/cplus/) 

[1.1 namespace](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/1.1_namespace.cpp)

关键字：

```
namespace name{
    //variables, functions, classes
}
```
using 关键字声明

```
using namespace xxx
```

[1.2 cin cout](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/1.2_cin_cout.cpp)

cout 和 cin 就分别是 ostream 和 istream 类的对象

endl是“end of line”的缩写。

bool 类型  true是1  false是0

[1.3 new delete](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/1.3_new_delete.cpp)

相当于C的malloc 和 free， 注意delete[]

[2.1 class](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/2.1_class.cpp)


```
class xxx {
public:
    ...
private:
    ...
};
```
private成员只能类成员能访问。

[2.2 constructor destructor](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/2.2_constructor_destructor.cpp)

```
class xxx {
public:
    xxx();//构造函数
    ~xxx();//析构函数
private:
    ...
};
```
没有返回类型， 自动运行，自动释放

2.2 程序运行结果
```
Student: leilei constructor
name:leilei	age:10	score:99.9
Student: xiaoming constructor
name:xiaoming	age:20	score:100
Student: xiaoming destructor
Student: leilei destructor
```
构造函数初始化列表

```
xxx():m_a(a), m_b(b)
{
}
```

[2.3 friend](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/2.3_friend.cpp)

在 C++ 中，一个类中可以有 public、protected、private 三种属性的成员，通过对象可以访问 public 成员，只有本类中的函数可以访问本类的 private 成员。

借助友元（friend），可以使得其他类中的成员函数以及全局范围内的函数访问当前类的 private 成员。

在友元函数中不能直接访问类的成员，必须要借助对象

- 友元的关系是单向的而不是双向的。如果声明了类 B 是类 A 的友元类，不等于类 A 是类 B 的友元类，类 A 中的成员函数不能访问类 B 中的 private 成员。
- 友元的关系不能传递。如果类 B 是类 A 的友元类，类 C 是类 B 的友元类，不等于类 C 是类 A 的友元类。

[2.4 string](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/2.4_string.cpp)

字符串定义、输入输出、拼接、增删改查

运行输出：

```
s1: c++
s2: c++
s3: 
s4: hello world len: 11
c str:c++
h e l l o   w o r l d 
s5: c++hello world	s6: c++A
insert: hello c++world
insert: hello abcde c++world
erase: hello e c++world
erase: hello
s4: hello world
pick: world
find at index : 6
find at index : 6
Not found index: 4294967295
find at index : 2

```
