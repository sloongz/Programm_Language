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


```
class A {
protected:
	int m_a;
};

class B: virtual public A {  //虚继承
protected:
	int m_b;
};

class C: virtual public A {  //虚继承
protected:
	int m_c;
};

//派生类D
class D: public B, public C {
}
```


为了解决多继承时的命名冲突和冗余数据问题，C++ 提出了虚继承，使得在派生类中只保留一份间接基类的成员。

虚继承的目的是让某个类做出声明，承诺愿意共享它的基类。其中，这个被共享的基类就称为虚基类（Virtual Base Class），本例中的 A 就是一个虚基类。在这种机制下，不论虚基类在继承体系中出现了多少次，在派生类中都只包含一份虚基类的成员。

[5.1 polymorphism virtual function]()

面向对象程序设计语言有封装、继承和多态三种机制，这三种机制能够有效提高程序的可读性、可扩充性和可重用性。

多态（polymorphism）”指的是同一名字的事物可以完成不同的功能。多态可以分为编译时的多态和运行时的多态。前者主要是指函数的重载（包括运算符的重载）、对重载函数的调用，在编译时就能根据实参确定应该调用哪个函数，因此叫编译时的多态；而后者则和继承、虚函数等概念有关，是本章要讲述的内容。本教程后面提及的多态都是指运行时的多态。

- 虚函数（Virtual Function）

```
class a {
public:
    virtual void func(int);
};
```

通过基类指针只能访问派生类的成员变量，但是不能访问派生类的成员函数。

有了虚函数，基类指针指向基类对象时就使用基类的成员（包括成员函数和成员变量），指向派生类对象时就使用派生类的成员。换句话说，基类指针可以按照基类的方式来做事，也可以按照派生类的方式来做事，它有多种形态，或者说有多种表现方式，我们将这种现象称为多态（Polymorphism）。

[5.2 pure virtual function](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/5.2_pure_virtual_function.cpp)

```
class A {
public:
    virtual 返回值类型 函数名 (函数参数) = 0;
};
最后的=0并不表示函数返回值为0，它只起形式上的作用，告诉编译系统“这是纯虚函数”。
```
纯虚函数没有函数体，不是完整的函数，无法调用，也无法为其分配内存空间。

抽象类通常是作为基类，让派生类去实现纯虚函数。派生类必须实现纯虚函数才能被实例化。

存虚函数是派生类必须实现抽象基类功能的霸王条款

[6.1 operator](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/6.1_operator.cpp)

```
返回值类型 operator 运算符名称 (形参表列){
    //TODO:
}
```
运算符重载是通过函数实现的，它本质上是函数重载

当执行c3 = c1 + c2;语句时，编译器检测到+号两边都是 对象，就会转换为类似下面的函数调用

```
c3 = operator+(c1, c2);
```

[7.1 template function](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/7.1_template_function.cpp)

类型的参数化

```
template <typename 类型参数1 , typename 类型参数2 , ...> 返回值类型  函数名(形参列表){
    //在函数体中可以使用类型参数
}
```

[7.2 template class](https://github.com/sloongz/Programm_Language/blob/master/C%2B%2B/7.2_template_class.cpp)

类模板的目的同样是将数据的类型参数化
```
template<typename 类型参数1 , typename 类型参数2 , …> class 类名{
    //TODO:
};
```
在类外定义成员函数时仍然需要带上模板头，格式为：

```
template<typename 类型参数1 , typename 类型参数2 , …>
返回值类型 类名<类型参数1 , 类型参数2, ...>::函数名(形参列表){
    //TODO:
}
```
[8.1 exception]()

```
try{
    // 可能抛出异常的语句
}catch(exceptionType variable){
    // 处理异常的语句
}
```
throw 抛出异常

```
throw
```
抛出（Throw）--> 检测（Try） --> 捕获（Catch）


[9 文件]()

API
```
open()              打开指定文件，使其与文件流对象相关联。
is_open()           检查指定文件是否已打开。
close()             关闭文件，切断和文件流对象的关联。
swap()              交换 2 个文件流对象。
operator>>          重载 >> 运算符，用于从指定文件中读取数据。
gcount()            返回上次从文件流提取出的字符个数。该函数常和 get()、getline()、ignore()、peek()、read()、readsome()、putback() 和 unget() 联用。
get()               从文件流中读取一个字符，同时该字符会从输入流中消失。
getline(str,n,ch)   从文件流中接收 n-1 个字符给 str 变量，当遇到指定 ch 字符时会停止读取，默认情况下 ch 为 '\0'。 
ignore(n,ch)        从文件流中逐个提取字符，但提取出的字符被忽略，不被使用，直至提取出 n 个字符，或者当前读取的字符为 ch。
peek()              返回文件流中的第一个字符，但并不是提取该字符。
putback(c)          将字符 c 置入文件流（缓冲区）。
operator<<          重载 << 运算符，用于向文件中写入指定数据。
put()               向指定文件流中写入单个字符。
write()             向指定文件中写入字符串。
tellp()             用于获取当前文件输出流指针的位置。
seekp()             设置输出文件输出流指针的位置。
flush()             刷新文件输出流缓冲区。
good()              操作成功，没有发生任何错误。
eof()               到达输入末尾或文件尾。
```

open

```
void open(const char* szFileName, int mode)
```

```
ios::in             打开文件用于读取数据。如果文件不存在，则打开出错。
ios::out            打开文件用于写入数据。如果文件不存在，则新建该文件；如果文件原来就存在，则打开时清除原来的内容。
ios::app            打开文件，用于在其尾部添加数据。如果文件不存在，则新建该文件。
ios::ate            打开一个已有的文件，并将文件读指针指向文件末尾（读写指 的概念后面解释）。如果文件不存在，则打开出错。
ios:: trunc         打开文件时会清空内部存储的所有数据，单独使用时与 ios::out 相同。
ios::binary         以二进制方式打开文件。若不指定此模式，则以文本模式打开。
ios::in | ios::out      打开已存在的文件，既可读取其内容，也可向其写入数据。文件刚打开时，原有内容保持不变。如果文件不存在，则打开出错。
ios::in | ios::out      打开已存在的文件，可以向其写入数据。文件刚打开时，原有内容保持不变。如果文件不存在，则打开出错。
ios::in | ios::out | ios::trunc 打开文件，既可读取其内容，也可向其写入数据。如果文件本来就存在，则打开时清除原来的内容；如果文件不存在，则新建该文件。
```

