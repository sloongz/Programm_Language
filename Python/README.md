Python [教程](http://c.biancheng.net/python/)

[1.1 basic operation](https://github.com/sloongz/Programm_Language/blob/master/Python/1.1_basic_operation.py)

如何运行

1） 在文件开始加上 
```
#!/usr/bin/env python
```
或

```
#!/usr/bin/python
```
./xxx.py直接运行


2） python运行

```
$ python xxx.py
```

[1.2 list tuple dict set](https://github.com/sloongz/Programm_Language/blob/master/Python/1.2_list_tuple_dict_set.py)


**list**

使用 [ ] 直接创建列表，
使用[ ]创建列表后，一般使用=将它赋值给某个变量
```
listname = [element1 , element2 , element3 , ... , elementn]
```
添加元素

```
listname.append(obj)
```

```
listname.extend(obj)
```
extend() 和 append() 的不同之处在于：extend() 不会把列表或者元祖视为一个整体，而是把它们包含的元素逐个添加到列表中

append() 和 extend() 方法只能在列表末尾插入元素，如果希望在列表中间某个位置插入元素，那么可以使用 insert() 方法

```
listname.insert(index , obj)
```

del 可以删除列表中的单个元素
```
del listname[index]
```
del 也可以删除中间一段连续的元素

```
del listname[start : end]
```

pop() 方法用来删除列表中指定索引处的元素。
listname 表示列表名称，index 表示索引值。如果不写 index 参数，默认会删除列表中的最后一个元素
```
listname.pop(index)
```

remove
```
remove() 方法只会删除第一个和指定值相同的元素
```

index() 方法

index() 方法用来查找某个元素在列表中出现的位置（也就是索引），如果该元素不存在，则会导致 ValueError 错误
```
listname.index(obj, start, end)
```
count() 方法用来统计某个元素在列表中出现的次数

```
listname.count(obj)
```

**tuple**

元组（tuple）是 Python 中另一个重要的序列结构，和列表类似，元组也是由一系列按特定顺序排序的元素组成。
元组和列表（list）的不同之处在于：
- 列表的元素是可以更改的，包括修改元素值，删除和插入元素，所以列表是可变序列；
- 而元组一旦被创建，它的元素就不可更改了，所以元组是不可变序列。

```
tuplename = (element1, element2, ..., elementn)
```
也可以把小括号去掉

list转tuple

```
tuple(list1)
```
访问

```
tuplename[i]
tuplename[start : end : step]
```

**dict**

字典（dict）是一种无序的、可变的序列，它的元素以“键值对（key-value）”的形式存储。相对地，列表（list）和元组（tuple）都是有序的序列，它们的元素在底层是挨着存放的。

字典中，习惯将各元素对应的索引称为键（key），各个键对应的元素称为值（value），键及其关联的值称为“键值对”。

创建：

1）使用 { } 创建字典
```
dictname = {'key':'value1', 'key2':'value2', ..., 'keyn':valuen}
```
2）通过 fromkeys()方法创建带有默认值的字典

```
dictname = dict.fromkeys(list，value=None)
```
其中，list 参数表示字典中所有键的列表（list）；value 参数表示默认值，如果不写，则为空值 None。

3）通过 dict() 映射函数创建字典


```
a = dict(str1=value1, str2=value2, str3=value3)
```
str 表示字符串类型的键，value 表示键对应的值。使用此方式创建字典时，字符串不能带引号。

```
demo = [('two',2), ('one',1), ('three',3)]
demo = [['two',2], ['one',1], ['three',3]]
demo = (('two',2), ('one',1), ('three',3))
demo = (['two',2], ['one',1], ['three',3])
a = dict(demo)
```
向 dict() 函数传入列表或元组，而它们中的元素又各自是包含 2 个元素的列表或元组，其中第一个元素作为键，第二个元素作为值。

```
keys = ['one', 'two', 'three']
values = [1, 2, 3] 
a = dict( zip(keys, values) )
```

访问

```
dictname[key]
```

```
dictname.get(key[,default])
```
dictname 表示字典变量的名字；key 表示指定的键；default 用于指定要查询的键不存在时，此方法返回的默认值，如果不手动指定，会返回 None

添加

```
dictname[key] = value
```

删除

```
del dictname[key]
```
keys()、values() 和 items() 方法
- keys() 方法用于返回字典中的所有键（key）；
- values() 方法用于返回字典中所有键对应的值（value）；
- items() 用于返回字典中所有的键值对（key-value）。


copy() 方法返回一个字典的拷贝，也即返回一个具有相同键值对的新字典。

update() 方法可以使用一个字典所包含的键值对来更新己有的字典。

update() 方法可以使用一个字典所包含的键值对来更新己有的字典。在执行 update() 方法时，如果被更新的字典中己包含对应的键值对，那么原 value 会被覆盖；如果被更新的字典中不包含对应的键值对，则该键值对被添加进去。

setdefault() 方法用来返回某个 key 对应的 value。

```
dictname.setdefault(key, defaultvalue)
```
setdefault() 方法总能返回指定 key 对应的 value：
- 如果该 key 存在，那么直接返回该 key 对应的 value；
- 如果该 key 不存在，那么先为该 key 设置默认的 defaultvalue，然后再返回该 key 对应的 defaultvalue。


**set**

Python 中的集合，和数学中的集合概念一样，用来保存不重复的元素，即集合中的元素都是唯一的，互不相同。


```
setname = {element1,element2,...,elementn}
setname = set(iteration)
```
交集	    &	取两集合公共的元素
并集    	|	取两集合全部的元素
差集    	-	取一个集合中另一集合没有的元素
对称差集	^	取集合 A 和 B 中不属于 A&B 的元素

[2.1 string](https://github.com/sloongz/Programm_Language/blob/master/Python/2.1_string.py)

**字符串拼接**
```
str1+str2
```
数字转字符串
```
num=1
str(num)
```
**截取多个字符**
```
strname[start : end : step]
```
- strname：要截取的字符串；
- start：表示要截取的第一个字符所在的索引（截取时包含该字符）。如果不指定，默认为 0，也就是从字符串的开头截取；
- end：表示要截取的最后一个字符所在的索引（截取时不包含该字符）。如果不指定，默认为字符串的长度；
- step：指的是从 start 索引处的字符开始，每 step 个距离获取一个字符，直至 end 索引出的字符。step 默认值为 1，当省略该值时，最后一个冒号也可以省略。

**长度**

```
len（string）
```

**分割**

```
str.split(sep,maxsplit)
```
- str：表示要进行分割的字符串；
- sep：用于指定分隔符，可以包含多个字符。此参数默认为 None，表示所有空字符，包括空格、换行符“\n”、制表符“\t”等。
- maxsplit：可选参数，用于指定分割的次数，最后列表中子串的个数最多为 maxsplit+1。如果不指定或者指定为 -1，则表示分割次数没有限制。

**连接**

join() 方法也是非常重要的字符串方法，它是 split() 方法的逆方法，用来将列表（或元组）中包含的多个字符串连接成一个字符串。

```
newstr = str.join(iterable)
```
- newstr：表示合并后生成的新字符串；
- str：用于指定合并时的分隔符；
- iterable：做合并操作的源字符串数据，允许以列表、元组等形式提供。


**count()方法**：统计字符串出现的次数

```
str.count(sub[,start[,end]])
```
- str：表示原字符串；
- sub：表示要检索的字符串；
- start：指定检索的起始位置，也就是从什么位置开始检测。如果不指定，默认从头开始检索；
- end：指定检索的终止位置，如果不指定，则表示一直检索到结尾。

**find()方法**：检测字符串中是否包含某子串

```
str.find(sub[,start[,end]])
```
find() 方法用于检索字符串中是否包含目标字符串，如果包含，则返回第一次出现该字符串的索引；反之，则返回 -1
- str：表示原字符串；
- sub：表示要检索的目标字符串；
- start：表示开始检索的起始位置。如果不指定，则默认从头开始检索；
- end：表示结束检索的结束位置。如果不指定，则默认一直检索到结尾。

同 find() 方法类似，index() 方法也可以用于检索是否包含指定的字符串，不同之处在于，当指定的字符串不存在时，index() 方法会抛出异常。

```
str.index(sub[,start[,end]])
```
- str：表示原字符串；
- sub：表示要检索的子字符串；
- start：表示检索开始的起始位置，如果不指定，默认从头开始检索；
- end：表示检索的结束位置，如果不指定，默认一直检索到结尾。

**对齐** ljust()左对齐  rjust()右对齐  center()中间对齐

**startswith()和endswith()方法**

startswith() 方法用于检索字符串是否以指定字符串开头，如果是返回 True；反之返回 False。
```
str.startswith(sub[,start[,end]])
```
endswith() 方法用于检索字符串是否以指定字符串结尾，如果是则返回 True；反之则返回 False。

```
str.endswith(sub[,start[,end]])
```

**字符串大小写转换**

title() 方法用于将字符串中每个单词的首字母转为大写，其他字母全部转为小写，转换完成后，此方法会返回转换得到的字符串。如果字符串中没有需要被转换的字符，此方法会将字符串原封不动地返回。
```
str.title()
```
lower() 方法用于将字符串中的所有大写字母转换为小写字母，转换完成后，该方法会返回新得到的字符串。

```
str.lower()
```
upper() 的功能和 lower() 方法恰好相反，它用于将字符串中的所有小写字母转换为大写字母，和以上两种方法的返回方式相同，即如果转换成功，则返回新字符串；反之，则返回原字符串。

```
str.upper()
```

**删除指定字符串**
- strip()：删除字符串前后（左右两侧）的空格或特殊字符。
- lstrip()：删除字符串前面（左边）的空格或特殊字符。
- rstrip()：删除字符串后面（右边）的空格或特殊字符。

**格式化字符串**

```
str.format(args)
```
- str 用于指定字符串的显示样式
- args 用于指定要进行格式转换的项，如果有多项，之间有逗号进行分割


[3.1 if else](https://github.com/sloongz/Programm_Language/blob/master/Python/3.1_if_else.py)

```
if 表达式：
    代码块
```

```
if 表达式：
    代码块 1
else：
    代码块 2
```

```
if 表达式 1：
    代码块 1
elif 表达式 2：
    代码块 2
elif 表达式 3：
    代码块 3
...//其它elif语句
else：
    代码块 n
```
if、elif 和 else 后面的代码块一定要缩进，而且缩进量要大于 if、elif 和 else 本身。

[3.2 pass assert](https://github.com/sloongz/Programm_Language/blob/master/Python/3.2_pass_assert.py)


```
pass
```
 空语句，什么都不做。


```
assert 表达式
```
表达式为0 就报错

[3.3 while for](https://github.com/sloongz/Programm_Language/blob/master/Python/3.3_while_for.py)

```
while 条件表达式：
    代码块
```

```
for 迭代变量 in 字符串|列表|元组|字典|集合：
    代码块
```

无论是 while 循环还是 for 循环，其后都可以紧跟着一个 else 代码块，它的作用是当循环条件为 False 跳出循环时，程序会最先执行 else 代码块中的代码。


```
continue
```

```
break
```

[3.4 sorted reversed zip](https://github.com/sloongz/Programm_Language/blob/master/Python/3.4_sorted_reversed_zip.py)

排序

```
list = sorted(iterable, key=None, reverse=False)  
```
其中，iterable 表示指定的序列，key 参数可以自定义排序规则；reverse 参数指定以升序（False，默认）还是降序（True）进行排序。sorted() 函数会返回一个排好序的列表。

逆序

```
reversed(seq)
```
其中，seq 可以是列表，元素，字符串以及 range() 生成的区间列表。

[4.1 function](https://github.com/sloongz/Programm_Language/blob/master/Python/4.1_function.py)

**定义：**
```
def 函数名(参数列表):
    //实现特定功能的多行代码
    [return [返回值]]
```
**调用：**

```
[返回值] = 函数名([形参值])
```
定义带有默认值参数的函数：
```
def 函数名(...，形参名，形参名=默认值)：
    代码块
```

**作用域**

```
使用 global 关键字对变量进行修饰后，该变量就会变为全局变量。
```

```
globals() 函数
```

它可以返回一个包含全局范围内所有变量的字典，该字典中的每个键值对，键为变量名，值为该变量的值。

```
locals()函数
```
我们可以得到一个包含当前作用域内所有变量的字典。这里所谓的“当前作用域”指的是，在函数内部调用 locals() 函数，会获得包含所有局部变量的字典；而在全局范文内调用 locals() 函数，其功能和 globals() 函数相同。

```
vars(object)
```
其功能是返回一个指定 object 对象范围内所有变量组成的字典。如果不传入object 参数，vars() 和 locals() 的作用完全相同。


**函数内部可以定义函数**

```
#全局函数
def outdef():
    #局部函数
    def indef():
        print "调用局部函数"
    return indef #返回内部函数indef()
```

**闭包**

闭包，又称闭包函数或者闭合函数，其实和前面讲的嵌套函数类似，不同之处在于，闭包中外部函数返回的不是一个具体的值，而是一个函数。一般情况下，返回的函数会赋值给一个变量，这个变量可以在后面被继续执行调用。

[4.2 lambda_eval_exec](https://github.com/sloongz/Programm_Language/blob/master/Python/4.2_lambda_eval_exec.py)

**lambda**
```
name = lambda [list] : 表达式
```
常用来表示内部仅包含 1 行表达式的函数。如果一个函数的函数体仅有 1 行表达式，则该函数就可以用 lambda 表达式来代替。

定义 lambda 表达式，必须使用 lambda 关键字；[list] 作为可选参数，等同于定义函数是指定的参数列表；value 为该表达式的名称。

**eval()和exec()**

eval() 执行完会返回结果，而 exec() 执行完不返回结果
```
eval(source, globals=None, locals=None, /)
```

```
exec(source, globals=None, locals=None, /)
```
二者的语法格式除了函数名，其他都相同，其中各个参数的具体含义如下:
- expression：这个参数是一个字符串，代表要执行的语句 。该语句受后面两个字典类型参数 globals 和 locals 的限制，只有在 globals 字典和 locals 字典作用域内的函数和变量才能被执行。
- globals：这个参数管控的是一个全局的命名空间，即 expression 可以使用全局命名空间中的函数。如果只是提供了 globals 参数，而没有提供自定义的 __builtins__，则系统会将当前环境中的 __builtins__ 复制到自己提供的 globals 中，然后才会进行计算；如果连 globals 这个参数都没有被提供，则使用 Python 的全局命名空间。
- locals：这个参数管控的是一个局部的命名空间，和 globals 类似，当它和 globals 中有重复或冲突时，以 locals 的为准。如果 locals 没有被提供，则默认为 globals。

[5.1 class]()

**定义类**

```
class 类名：
    多个（≥0）类属性...
    多个（≥0）类方法...
```
**构造函数**

```
def __init__(self,...):
    代码块
```
**类对象访问变量或方法**

```
类对象名.变量名
```

```
对象名.方法名(参数)
```
**给类对象动态添加/删除变量**
```
类对象名.变量名
```
```
del 类对象名.变量名
```

**self**

无论是构造方法还是实例方法，最少要包含一个参数，并没有规定该参数的具体名称。之所以将其命名为 self，只是程序员之间约定俗成的一种习惯，遵守这个约定，可以使我们编写的代码具有更好的可读性

 Python 类方法中的 self 参数就相当于 C++ 中的 this 指针。
 
 
**类属性和实例属性**
- 类体中、所有函数之外：此范围定义的变量，称为类属性或类变量；
- 类体中，所有函数内部：以“self.变量名”的方式定义的变量，称为实例属性或实例变量；
- 类体中，所有函数内部：以“变量名=变量值”的方式定义的变量，称为局部变量。

**类方法**

类方法:
```
class xxx:
    #定义了一个类方法
    @classmethod
    def info(cls):
        ...
```

类静态方法
```
class xxx:
    @staticmethod
    def info(...):
        ...
```
静态方法没有类似 self、cls 这样的特殊参数，因此 Python 解释器不会对它包含的参数做任何类或对象的绑定。也正因为如此，类的静态方法中无法调用任何类属性和类方法。

 Python 实例方法、类方法、静态方法的[区别与作用](https://www.cnblogs.com/wcwnina/p/8644892.html)：
 [code](https://github.com/sloongz/Programm_Language/blob/master/Python/5.2_class.py)
 
-  实例方法
 
```
定义：第一个参数必须是实例对象，该参数名一般约定为“self”，通过它来传递实例的属性和方法（也可以传类的属性和方法）；

调用：只能由实例对象调用。
```
实例方法就是类的实例能够使用的方法。这里不做过多解释。


- 类方法

```
定义：使用装饰器@classmethod。第一个参数必须是当前类对象，该参数名一般约定为“cls”，通过它来传递类的属性和方法（不能传实例的属性和方法）；

调用：类对象或实例对象都可以调用。
```
使用装饰器@classmethod。

原则上，类方法是将类本身作为对象进行操作的方法。假设有个方法，且这个方法在逻辑上采用类本身作为对象来调用更合理，那么这个方法就可以定义为类方法。另外，如果需要继承，也可以定义为类方法。


- 静态方法

```
定义：使用装饰器@staticmethod。参数随意，没有“self”和“cls”参数，但是方法体中不能使用类或实例的任何属性和方法；

调用：类对象或实例对象都可以调用。
```
使用装饰器@staticmethod。

静态方法是类中的函数，不需要实例。静态方法主要是用来存放逻辑性的代码，逻辑上属于类，但是和类本身没有关系，也就是说在静态方法中，不会涉及到类中的属性和方法的操作。可以理解为，静态方法是个独立的、单纯的函数，它仅仅托管于某个类的名称空间中，便于使用和维护。

[5.3 package inheritance](https://github.com/sloongz/Programm_Language/blob/master/Python/5.3_package_inheritance.py)

**封装**

但是，Python 并没有提供 public、private 这些修饰符。为了实现类的封装，Python 采取了下面的方法：

```
默认情况下，Python 类中的变量和方法都是公有（public）的，它们的名称前都没有下划线（_）；

如果类中的变量和函数，其名称以双下划线“__”开头，则该变量（函数）为私有变量（私有函数），其属性等同于 private。
```
除此之外，还可以定义以单下划线“_”开头的类属性或者类方法（例如 _name、_display(self)），这种类属性和类方法通常被视为私有属性和私有方法，虽然它们也能通过类对象正常访问，但这是一种约定俗称的用法。

简单的例子

```
class Student:
    def __init__(self, name):
        self.__name = name
    def get_name(self):
        return self.__name
    def set_name(self, name):
        self.__name = name

a = Student('lilei')
print a.get_name()
a.set_name('xiaoming')
print a.get_name()

```
升级版

```
class StudentX:
    @property
    def name(self):
         return self.__name
    @name.setter
    def name(self, name):
      self.__name = name

b = StudentX()
b.name = "meimei"
print b.name
```
装饰器（decorator）

内置的@property装饰器就是负责把一个方法变成属性调用的，
@name.setter，负责把一个setter方法变成属性赋值


**继承**

```
class 类名(父类1, 父类2, ...)：
    #类定义部分
```
子类继承父类时，只需在定义子类时，将父类（可以是多个）放在子类之后的圆括号里即可


supper

使用 super() 函数。但如果涉及多继承，该函数只能调用第一个直接父类的构造方法。

```
#python2:
super(Class, obj).__init__(self,...)
#python3:
super().__init__(self,...)
```


**限制类实例动态添加属性和方法**
 

为单个实例对象添加方法，不会影响该类的其它实例对象；而如果为类动态地添加方法，则所有的实例对象都可以使用。

__slots__ 只能限制为实例对象动态添加属性和方法，而无法限制动态地为类添加属性和方法。

__slots__ 属性值其实就是一个元组，只有其中指定的元素，才可以作为动态添加的属性或者方法的名称。举个例子：

```
class CLanguage:
    __slots__ = ('name','add','info')
```
CLanguage 类中指定了 __slots__ 属性，这意味着，该类的实例对象仅限于动态添加 name、add、info 这 3 个属性以及 name()、add() 和 info() 这 3 个方法。



[6.1 exception](https://github.com/sloongz/Programm_Language/blob/master/Python/6.1_exception.py)


```
AssertionError      当 assert 关键字后的条件为假时，程序运行会停止并抛出 AssertionError 异常
AttributeError      当试图访问的对象属性不存在时抛出的异常
IndexError          索引超出序列范围会引发此异常
KeyError            字典中查找一个不存在的关键字时引发此异常
NameError           不同类型数据之间的无效操作
ZeroDivisionError   除法运算中除数为 0 引发此异常
```



Python 异常处理机制会涉及 try、except、else、finally 这 4 个关键字，同时还提供了可主动使程序引发异常的 raise 语句
```
try:
    可能产生异常的代码块
except [ (Error1, Error2, ... ) [as e] ]:
    处理异常的代码块1
except [ (Error3, Error4, ... ) [as e] ]:
    处理异常的代码块2
except  [Exception]:
    处理其它异常
```
- (Error1, Error2,...) 、(Error3, Error4,...)：其中，Error1、Error2、Error3 和 Error4 都是具体的异常类型。显然，一个 except 块可以同时处理多种异常。
- [as e]：作为可选参数，表示给异常类型起一个别名 e，这样做的好处是方便在 except 块中调用异常类型（后续会用到）。
- [Exception]：作为可选参数，可以代指程序可能发生的所有异常情况，其通常用在最后一个 except 块。


```
try:
    1/0
except Exception as e:
    # 访问异常的错误编号和详细信息
    print(e.args)
    print(str(e))
    print(repr(e))
```
每种异常类型都提供了如下几个属性和方法，通过调用它们，就可以获取当前处理异常类型的相关信息:

- args：返回异常的错误编号和描述字符串；
- str(e)：返回异常信息，但不包括异常信息的类型；
- repr(e)：返回较全的异常信息，包括异常信息的类型。

异常处理机制还提供了一个 else 块，也就是原有 try except 语句的基础上再添加一个 else 块，即try except else结构.

异常处理机制还提供了一个 finally 语句，通常用来为 try 块中的程序做扫尾清理工作。finally 语句的功能是：无论 try 块是否发生异常，最终都要进入 finally 语句，并执行其中的代码块。


**raise 语句**
```
raise [exceptionName [(reason)]]
```
- raise：单独一个 raise。该语句引发当前上下文中捕获的异常（比如在 except 块中），或默认引发 RuntimeError 异常。
- raise 异常类名称：raise 后带一个异常类名称，表示引发执行类型的异常。
- raise 异常类名称(描述信息)：在引发指定类型的异常的同时，附带异常的描述信息。


[7.1 module]()

```
import 模块名1 [as 别名1], 模块名2 [as 别名2]，…
```
使用这种语法格式的 import 语句，会导入指定模块中的所有成员（包括变量、函数、类等）。不仅如此，当需要使用模块中的成员时，需用该模块名（或别名）作为前缀，否则 Python 解释器会报错。

```
from 模块名 import 成员名1 [as 别名1]，成员名2 [as 别名2]，…
```
使用这种语法格式的 import 语句，只会导入模块中指定的成员，而不是全部成员。同时，当程序中使用该成员时，无需附加任何前缀，直接使用成员名（或别名）即可。

**自定义模块**

导入模块的3种方式
- 在当前目录，即当前执行的程序文件所在目录下查找；
- 到 PYTHONPATH（环境变量）下的每个目录中查找；
- 到 Python 默认的安装目录下查找。