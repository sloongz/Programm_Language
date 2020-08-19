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

