# 第二章 变量和基本类型

### 基本内置类型

**基本算数类型**：

| 类型 | 含义 | 最小尺寸|
|---|---|---|
| `bool` | 布尔类型  | 8 bits |
| `char`| 字符 | 8 bits |
| `wchar_t` | 宽字符 | 16 bits |
| `char16_t` | Unicode字符 | 16 bits |
| `char32_t` | Unicode字符 | 32 bits |
| `short` | 短整型 | 16 bits |
| `int` | 整型 | 16 bits (在32位机器中是32 bits) |
| `long` | 长整型 | 32 bits |
| `long long` | 长整型 | 64 bits （是在C++11中新定义的） |
| `float` | 单精度浮点数 | 6位有效数字 |
| `double` | 双精度浮点数 | 10位有效数字 |
| `long double` | 扩展精度浮点数 | 10位有效数字 |


### 如何选择类型

- 1.当明确知晓数值不可能是负数时，选用无符号类型；
- 2.使用`int`执行整数运算。一般`long`的大小和`int`一样，而`short`常常显得太小。除非超过了`int`的范围，选择`long long`。
- 3.算术表达式中不要使用`char`或`bool`。
- 4.浮点运算选用`double`。

### 类型转换

- 非布尔型赋给布尔型，初始值为0则结果为false，否则为true。
- 布尔型赋给非布尔型，初始值为false结果为0，初始值为true结果为1。

### 字面值常量

- 一个形如`42`的值被称作**字面值常量**（literal）。
  - 整型和浮点型字面值。
  - 字符和字符串字面值。
    - 使用空格连接，继承自C。
    - 字符字面值：单引号， `'a'`
    - 字符串字面值：双引号， `"Hello World""`
  - 转义序列。`\n`、`\t`等。
  - 布尔字面值。`true`，`false`。
  - 指针字面值。`nullptr`

## 变量

**变量**提供一个**具名**的、可供程序操作的存储空间。   `C++`中**变量**和**对象**一般可以互换使用。

### 变量定义（define）

- **定义形式**：类型说明符（type specifier） + 一个或多个变量名组成的列表。如`int sum = 0, value, units_sold = 0;`
- **初始化**（initialize）：对象在创建时获得了一个特定的值。
  - **初始化不是赋值！**：
  - 初始化 = 创建变量 + 赋予初始值
  - 赋值 = 擦除对象的当前值 + 用新值代替
  - **列表初始化**：使用花括号`{}`，如`int units_sold{0};`
  - 默认初始化：定义时没有指定初始值会被默认初始化；在函数体内部的内置类型变量将不会被初始化。
  - 建议初始化每一个内置类型的变量。

### 变量的**声明**（declaration） vs **定义**（define）
  - 为了支持分离式编译，`C++`将声明和定义区分开。**声明**使得名字为程序所知。**定义**负责创建与名字关联的实体。
  - **extern**：只是说明变量定义在其他地方。
  - 只声明而不定义： 在变量名前添加关键字 `extern`，如`extern int i;`。但如果包含了初始值，就变成了定义：`extern double pi = 3.14;`
  - 变量只能被定义一次，但是可以多次声明。
- 名字的**作用域**（namescope）

## 左值和右值

- **左值**（l-value）**可以**出现在赋值语句的左边或者右边，比如变量；
- **右值**（r-value）**只能**出现在赋值语句的右边，比如常量。


## 复合类型

### 引用

- **引用**：引用是一个对象的别名，引用类型引用（refer to）另外一种类型。如`int &refVal = val;`。
- 引用必须初始化。
- 引用和它的初始值是**绑定bind**在一起的，而**不是拷贝**。

### 指针

- 是一种 `"指向（point to）"`另外一种类型的复合类型。
- **定义**指针类型： `int *ip1;`，**从右向左读**，`ip1`是指向`int`类型的指针。
- 指针存放某个对象的**地址**。
- 获取对象的地址： `int i=42; int *p = &i;`。 `&`是**取地址符**。
- 指针的值的四种状态：
  - 1.指向一个对象；
  - 2.指向紧邻对象的下一个位置；
  - 3.空指针；
  - 4.无效指针。
- 指针访问对象： `cout << *p;`， `*`是**解引用符**。
- 空指针不指向任何对象。
- `void*`指针可以存放**任意**对象的地址。
- 其他指针类型必须要与所指对象**严格匹配**。
- 两个指针相减的类型是`ptrdiff_t`。
- 建议：初始化所有指针。

## const限定符

- 动机：希望定义一些不能被改变值的变量。

### 初始化和const
- const对象**必须初始化**，且**不能被改变**。
- const变量默认不能被其他文件访问，非要访问，必须在指定const前加extern。

### const的引用

- **reference to const**（对常量的引用）：指向const对象的引用，如 `const int ival=1; const int &refVal = ival;`，可以读取但不能修改`refVal`。
- **临时量**（temporary）对象：当编译器需要一个空间来暂存表达式的求值结果时，临时创建的一个未命名的对象。
- 对临时量的引用是非法行为。

### 指针和const

- **pointer to const**（指向常量的指针）：不能用于改变其所指对象的值, 如 `const double pi = 3.14; const double *cptr = &pi;`。
- **const pointer**：指针本身是常量，如 `int i = 0; int *const ptr = &i;`

### 顶层const

- `顶层const`：指针本身是个常量。
- `底层const`：指针指向的对象是个常量。拷贝时严格要求相同的底层const资格。

### `constexpr`和常量表达式

- 常量表达式：指值不会改变，且在编译过程中就能得到计算结果的表达式。
- `C++11`新标准规定，允许将变量声明为`constexpr`类型以便由编译器来验证变量的值是否是一个常量的表达式。

## 处理类型

### 类型别名

- 传统别名：使用**typedef**来定义类型的同义词。 `typedef double wages;`
- 新标准别名：别名声明（alias declaration）： `using SI = Sales_item;`（C++11）

### auto类型说明符

- **auto**类型说明符：让编译器**自动推断类型**。
- `int i = 0, &r = i; auto a = r;` 推断`a`的类型是`int`。
- 会忽略`顶层const`。
- `const int ci = 1; const auto f = ci;`推断类型是`int`，需要自己加`const`
- `C++11`

### decltype类型指示符

- 从表达式的类型推断出要定义的变量的类型。
- **decltype**：选择并返回操作数的**数据类型**。
- `decltype(f()) sum = x;` 推断`sum`的类型是函数`f`的返回类型。
- 不会忽略`顶层const`。
- `C++11`

## 自定义数据结构

### struct

- 类可以以关键字`struct`开始，紧跟类名和类体。
- 类数据成员：类体定义类的成员。
- `C++11`：可以为类数据成员提供一个**类内初始值**（in-class initializer）。

### 编写自己的头文件

- 头文件通常包含哪些只能被定义一次的实体：类、`const`和`constexpr`变量。

预处理器概述：

- **预处理器**（preprocessor）：确保头文件多次包含仍能安全工作。
- 当预处理器看到`#include`标记时，会用指定的头文件内容代替`#include`
- **头文件保护符**（header guard）：头文件保护符依赖于预处理变量的状态：已定义和未定义。

```cpp
#ifndef SALES_DATA_H
#define SALES_DATA_H
strct Sale_data{
    ...
}
#endif
```
# 第三章 字符串、向量和数组

## using声明
- 使用某个命名空间：例如 `using std::cin`表示使用命名空间`std`中的名字`cin`。
- 头文件中不应该包含`using`声明。这样使用了该头文件的源码也会使用这个声明，会带来风险。

## string
- 标准库类型`string`表示可变长的字符序列。
- `#include <string>`，然后 `using std::string;`
- **string对象**：注意，不同于字符串字面值。
  
### 定义和初始化string对象

初始化`string`对象的方式：

| 方式 | 解释 |
| -- | -- |
| `string s1` | 默认初始化，`s1`是个空字符串 |
| `string s2(s1)` | `s2`是`s1`的副本 |
| `string s2 = s1` | 等价于`s2(s1)`，`s2`是`s1`的副本 |
| `string s3("value")` | `s3`是字面值“value”的副本，除了字面值最后的那个空字符外 |
| `string s3 = "value"` | 等价于`s3("value")`，`s3`是字面值"value"的副本 |
| `string s4(n, 'c')` | 把`s4`初始化为由连续`n`个字符`c`组成的串 |

- 拷贝初始化（copy initialization）：使用等号`=`将一个已有的对象拷贝到正在创建的对象。
- 直接初始化（direct initialization）：通过括号给对象赋值。

### string对象上的操作

`string`的操作：

| 操作 | 解释 |
|-----|-----|
| `os << s` | 将`s`写到输出流`os`当中，返回`os` |
| `is >> s` | 从`is`中读取字符串赋给`s`，字符串以空白分割，返回`is` |
| `getline(is, s)` | 从`is`中读取一行赋给`s`，返回`is` |
| `s.empty()` | `s`为空返回`true`，否则返回`false` |
| `s.size()` | 返回`s`中字符的个数 |
| `s[n]` | 返回`s`中第`n`个字符的引用，位置`n`从0计起 |
| `s1+s2` | 返回`s1`和`s2`连接后的结果 |
| `s1=s2` | 用`s2`的副本代替`s1`中原来的字符 |
| `s1==s2` | 如果`s1`和`s2`中所含的字符完全一样，则它们相等；`string`对象的相等性判断对字母的大小写敏感 |
| `s1!=s2` | 同上 |
| `<`, `<=`, `>`, `>=` | 利用字符在字典中的顺序进行比较，且对字母的大小写敏感 |

- string io：
    - 执行读操作`>>`：忽略掉开头的空白（包括空格、换行符和制表符），直到遇到下一处空白为止。
    - `getline`：读取一整行，**包括空白符**。
- 字符串字面值和string是不同的类型。

### 处理string对象中的字符

- **ctype.h vs. cctype**：C++修改了c的标准库，名称为去掉`.h`，前面加`c`。

`cctype`头文件中定义了一组标准函数：

| 函数 | 解释 |
|-----|-----|
| `isalnum(c)` | 当`c`是字母或数字时为真 |
| `isalpha(c)` | 当`c`是字母时为真 |
| `iscntrl(c)` | 当`c`是控制字符时为真 |
| `isdigit(c)` | 当`c`是数字时为真 |
| `isgraph(c)` | 当`c`不是空格但可以打印时为真 |
| `islower(c)` | 当`c`是小写字母时为真 |
| `isprint(c)` | 当`c`是可打印字符时为真 |
| `ispunct(c)` | 当`c`是标点符号时为真 |
| `isspace(c)` | 当`c`是空白时为真（空格、横向制表符、纵向制表符、回车符、换行符、进纸符） |
| `isupper(c)` | 当`c`是大写字母时为真 |
| `isxdigit(c)` | 当`c`是十六进制数字时为真 |
| `tolower(c)` | 当`c`是大写字母，输出对应的小写字母；否则原样输出`c` |
| `toupper(c)` | 当`c`是小写字母，输出对应的大写字母；否则原样输出`c` |

- 遍历字符串：使用**范围for**（range for）语句： `for (auto c: str)`，或者 `for (auto &c: str)`使用引用直接改变字符串中的字符。 （C++11）

## vector
- vector是一个**容器**，也是一个类模板；
- `#include <vector>` 然后 `using std::vector;`
- 容器：包含其他对象。
- 类模板：本身不是类，但可以**实例化instantiation**出一个类。 `vector`是一个模板， `vector<int>`是一个类型。
- 通过将类型放在类模板名称后面的**尖括号**中来指定**类型**，如`vector<int> ivec`。

### 定义和初始化vector对象

初始化`vector`对象的方法

| 方法 | 解释 |
|-----|-----|
| `vector<T> v1` | `v1`是一个空`vector`，它潜在的元素是`T`类型的，执行默认初始化 |
| `vector<T> v2(v1)` | `v2`中包含有`v1`所有元素的副本 |
| `vector<T> v2 = v1` | 等价于`v2(v1)`，`v2`中包含`v1`所有元素的副本 |
| `vector<T> v3(n, val)` | `v3`包含了n个重复的元素，每个元素的值都是`val` |
| `vector<T> v4(n)` | `v4`包含了n个重复地执行了值初始化的对象 |
| `vector<T> v5{a, b, c...}` | `v5`包含了初始值个数的元素，每个元素被赋予相应的初始值 |
| `vector<T> v5={a, b, c...}` | 等价于`v5{a, b, c...}` |

- 列表初始化： `vector<string> v{"a", "an", "the"};` （C++11）

### 向vector对象中添加元素

- `v.push_back(e)` 在尾部增加元素。
  
### 其他vector操作

`vector`支持的操作：

| 操作 | 解释 |
|-----|-----|
| `v.emtpy()` | 如果`v`不含有任何元素，返回真；否则返回假 |
| `v.size()` |  返回`v`中元素的个数|
| `v.push_back(t)` | 向`v`的尾端添加一个值为`t`的元素 |
| `v[n]` | 返回`v`中第`n`个位置上元素的**引用** |
| `v1 = v2` | 用`v2`中的元素拷贝替换`v1`中的元素  |
| `v1 = {a,b,c...}` | 用列表中元素的拷贝替换`v1`中的元素 |
| `v1 == v2` | `v1`和`v2`相等当且仅当它们的元素数量相同且对应位置的元素值都相同 |
| `v1 != v2` | 同上 |
| `<`,`<=`,`>`, `>=` | 以字典顺序进行比较 |

- 范围`for`语句内不应该改变其遍历序列的大小。
- `vector`对象（以及`string`对象）的下标运算符，只能对确知已存在的元素执行下标操作，不能用于添加元素。

## 迭代器iterator

- 所有标准库容器都可以使用迭代器。
- 类似于指针类型，迭代器也提供了对对象的间接访问。

### 使用迭代器

- `vector<int>::iterator iter`。
- `auto b = v.begin();`返回指向第一个元素的迭代器。
- `auto e = v.end();`返回指向最后一个元素的下一个（哨兵，尾后,one past the end）的迭代器（off the end）。
- 如果容器为空， `begin()`和 `end()`返回的是同一个迭代器，都是尾后迭代器。
- 使用解引用符`*`访问迭代器指向的元素。
- 养成使用迭代器和`!=`的习惯（泛型编程）。
- **容器**：可以包含其他对象；但所有的对象必须类型相同。
- **迭代器（iterator）**：每种标准容器都有自己的迭代器。`C++`倾向于用迭代器而不是下标遍历元素。
- **const_iterator**：只能读取容器内元素不能改变。
- **箭头运算符**： 解引用 + 成员访问，`it->mem`等价于 `(*it).mem`
- **谨记**：但凡是使用了迭代器的循环体，都不要向迭代器所属的容器添加元素。

标准容器迭代器的运算符:

| 运算符 | 解释 |
|-----|-----|
| `*iter` | 返回迭代器`iter`所指向的**元素的引用** |
| `iter->mem` | 等价于`(*iter).mem` |
| `++iter` | 令`iter`指示容器中的下一个元素 |
| `--iter` | 令`iter`指示容器中的上一个元素 |
| `iter1 == iter2` | 判断两个迭代器是否相等 |

### 迭代器运算

`vector`和`string`迭代器支持的运算：

| 运算符 | 解释 |
|-----|-----|
| `iter + n` | 迭代器加上一个整数值仍得到一个迭代器，迭代器指示的新位置和原来相比向前移动了若干个元素。结果迭代器或者指示容器内的一个元素，或者指示容器尾元素的下一位置。 |
| `iter - n` | 迭代器减去一个证书仍得到一个迭代器，迭代器指示的新位置比原来向后移动了若干个元素。结果迭代器或者指向容器内的一个元素，或者指示容器尾元素的下一位置。 |
| `iter1 += n` | 迭代器加法的复合赋值语句，将`iter1`加n的结果赋给`iter1` |
| `iter1 -= n` | 迭代器减法的复合赋值语句，将`iter2`减n的加过赋给`iter1` |
| `iter1 - iter2` | 两个迭代器相减的结果是它们之间的距离，也就是说，将运算符右侧的迭代器向前移动差值个元素后得到左侧的迭代器。参与运算的两个迭代器必须指向的是同一个容器中的元素或者尾元素的下一位置。 |
| `>`、`>=`、`<`、`<=` | 迭代器的关系运算符，如果某迭代器 |

- **difference_type**：保证足够大以存储任何两个迭代器对象间的距离，可正可负。

## 数组

- 相当于vector的低级版，**长度固定**。

### 定义和初始化内置数组

- 初始化：`char input_buffer[buffer_size];`，长度必须是const表达式，或者不写，让编译器自己推断。
- 数组不允许直接赋值给另一个数组。

### 访问数组元素

- 数组下标的类型：`size_t` 。
- 字符数组的特殊性：结尾处有一个空字符，如 `char a[] = "hello";` 。
- 用数组初始化 `vector`： `int a[] = {1,2,3,4,5}; vector<int> v(begin(a), end(a));` 。

### 数组和指针

- 使用数组时，编译器一般会把它转换成指针。
- 标准库类型限定使用的下标必须是无符号类型，而内置的下标可以处理负值。 
- **指针访问数组**：在表达式中使用数组名时，名字会自动转换成指向数组的第一个元素的指针。

## C风格字符串

- 从C继承来的字符串。
- 用空字符结束（`\0`）。
- 对大多数应用来说，使用标准库 `string`比使用C风格字符串更安全、更高效。
- 获取 `string` 中的 `cstring` ： `const char *str = s.c_str();` 。

C标准库String函数，定义在`<cstring>` 中：

| 函数 | 介绍 |
|-----|-----|
| `strlen(p)` | 返回`p`的长度，空字符不计算在内 |
| `strcmp(p1, p2)` | 比较`p1`和`p2`的相等性。如果`p1==p2`，返回0；如果`p1>p2`，返回一个正值；如果`p1<p2`，返回一个负值。 |
| `strcat(p1, p2)` | 将`p2`附加到`p1`之后，返回`p1` |
| `strcpy(p1, p2)` | 将`p2`拷贝给`p1`，返回`p1` |

## 多维数组

- **多维数组的初始化**： `int ia[3][4] = {{0,1,2,3}, ...}`。
- 使用范围for语句时，除了最内层的循环外，其他所有循环的控制变量都应该是引用类型。

## 指针vs引用

- 引用总是指向某个对象，定义引用时没有初始化是错的。
- 给引用赋值，修改的是该引用所关联的对象的值，而不是让引用和另一个对象相关联。

## 指向指针的指针

- 定义： `int **ppi = &pi;`
- 解引用：`**ppi`

## 动态数组

- 使用 `new`和 `delete`表达和c中`malloc`和`free`类似的功能，即在堆（自由存储区）中分配存储空间。
- 定义： `int *pia = new int[10];` 10可以被一个变量替代。
- 释放： `delete [] pia;`，注意不要忘记`[]`。





