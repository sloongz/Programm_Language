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
[3.1 reference](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/3.1_reference.cpp)

引用可以看做是数据的一个别名，通过这个别名和原来的名字都能够找到这份数据。

[4.1 Inheritance](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/4.1_inheritance.cpp)

继承的一般语法为：

```
class 派生类名:［继承方式］ 基类名{
    派生类新增加的成员
};
```
继承（Inheritance）可以理解为一个类从另一个类获取成员变量和成员函数的过程。例如类 B 继承于类 A，那么 B 就拥有 A 的成员变量和成员函数。

在C++中，派生（Derive）和继承是一个概念，只是站的角度不同。继承是儿子接收父亲的产业，派生是父亲把产业传承给儿子。

被继承的类称为父类或基类，继承的类称为子类或派生类。“子类”和“父类”通常放在一起称呼，“基类”和“派生类”通常放在一起称呼。

派生类除了拥有基类的成员，还可以定义自己的新成员，以增强类的功能。

public、protected、private 指定继承方式:
继承方式/基类成员 | public成员 | protected成员 | private成员
---|---|---|---
**public继承** | 	public | protected | 不可见
**protected继承** | protected | protected | 不可见
**private继承**| private | private | 不可见


如果派生类中的成员（包括成员变量和成员函数）和基类中的成员重名，那么就会遮蔽从基类继承过来的成员。

[4.2 Inheritance constructor destructor](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/4.2_inheritance_c_d.cpp)

类的构造函数不能被继承, 但是可以在派生类的构造函数中调用基类的构造函数。

[4.3 multiple inheritance](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/4.3_multiple_inheritance.cpp)


```
class D: public A, private B, protected C{
    //类D新增加的成员
}
```
[4.4 virtual inheritance](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/4.4_virtual_inheritance.cpp)

为了解决多继承时的命名冲突和冗余数据问题，C++ 提出了虚继承，使得在派生类中只保留一份间接基类的成员。

虚继承的目的是让某个类做出声明，承诺愿意共享它的基类。其中，这个被共享的基类就称为虚基类（Virtual Base Class），本例中的 A 就是一个虚基类。在这种机制下，不论虚基类在继承体系中出现了多少次，在派生类中都只包含一份虚基类的成员。