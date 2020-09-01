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