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

[4.1 function]()

定义：
```
def 函数名(参数列表):
    //实现特定功能的多行代码
    [return [返回值]]
```
调用：

```
[返回值] = 函数名([形参值])
```
定义带有默认值参数的函数：
```
def 函数名(...，形参名，形参名=默认值)：
    代码块
```

作用域

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

python 函数内部可以定义函数

```
#全局函数
def outdef():
    #局部函数
    def indef():
        print "调用局部函数"
    return indef #返回内部函数indef()
```

闭包

闭包，又称闭包函数或者闭合函数，其实和前面讲的嵌套函数类似，不同之处在于，闭包中外部函数返回的不是一个具体的值，而是一个函数。一般情况下，返回的函数会赋值给一个变量，这个变量可以在后面被继续执行调用。
