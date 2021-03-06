# BK_明解C语言
--------------
本文为阅读书籍《明解C语言-中级篇》所积累的知识点及编译书本代码时遇到的问题。部分对应代码在`\Code_2018\BK_明解C语言`目录下。每个代码内都含有程序功能、思路、疑惑点等内容，如有疑问指出。

---------------------
**rand()**

- 头文件：`#include<stdlib.h>`
- 格式：`int rand(void); `
- 功能：生成伪随机数，基于种子值(`seed`,默认为1)，按照特定规律生成的随机数
- 代码示例：[随机数生成.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C1_%E7%8C%9C%E6%95%B0%E6%B8%B8%E6%88%8F/%E9%9A%8F%E6%9C%BA%E6%95%B0%E7%94%9F%E6%88%90/%E9%9A%8F%E6%9C%BA%E6%95%B0%E7%94%9F%E6%88%90.cpp)


**srand()**

- 头文件：`#include<stdlib.h>`
- 格式：`void srand(unsigned seed);` 
- 功能：给后续调用的`rand()`设置种子(`seed`)，用于生成新的伪随机数序列
- 代码示例：[随机数生成.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C1_%E7%8C%9C%E6%95%B0%E6%B8%B8%E6%88%8F/%E9%9A%8F%E6%9C%BA%E6%95%B0%E7%94%9F%E6%88%90/%E9%9A%8F%E6%9C%BA%E6%95%B0%E7%94%9F%E6%88%90.cpp)
- 备注：常把时间当种子，`srand(time(NULL))`


**clock()**

- 头文件：`#include<time.h>`
- 格式：`clock_t clock(void);`
- 功能：求处理器调用某个进程所花费的时间（设定起点终点算差值）
- 返回值：从定义与程序启动相关的编程环境的时间点起，用处理器系统的最佳逼近返回程序占用处理器的时间。为了以秒为计量单位，需要将返回值除以`CLOCK_PER_SEC`宏的值(默认为1000)。如果无法获取处理器调用该进程所花费的时间，或者无法显示数值，就返回`(clock_t)-1`
- 代码示例：[计算处理所需时间.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C2_%E4%B8%93%E6%B3%A8%E4%BA%8E%E6%98%BE%E7%A4%BA/%E8%AE%A1%E7%AE%97%E5%A4%84%E7%90%86%E6%89%80%E9%9C%80%E6%97%B6%E9%97%B4/%E8%AE%A1%E7%AE%97%E5%A4%84%E7%90%86%E6%89%80%E9%9C%80%E6%97%B6%E9%97%B4.cpp)

**isprint()**

- 头文件：`#include<ctype.h>`
- 格式：`int isprint(int c)`
- 功能：判断c是否为含有空白字符`(' ')`的显示字符
- 返回值：如果判断成立，就返回0以外的值(真)，否则返回0
- 代码示例：[简单猜拳游戏_switch语句.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C3_%E7%8C%9C%E6%8B%B3%E6%B8%B8%E6%88%8F/%E7%AE%80%E5%8D%95%E7%8C%9C%E6%8B%B3%E6%B8%B8%E6%88%8F__switch%E8%AF%AD%E5%8F%A5/%E7%AE%80%E5%8D%95%E7%8C%9C%E6%8B%B3%E6%B8%B8%E6%88%8F__switch%E8%AF%AD%E5%8F%A5.cpp)


**把字符型转换为数值**

- `atoi()`：将你输入的字符串形式的整数转为`int`型
- `atol()`：将你输入的字符串形式的整数转换为`long`型
- `atof()`：将你输入的字符串形式的整数转换为`double`型
- 代码示例：[字符串转换为数值.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C4_%E7%8F%A0%E7%8E%91%E5%A6%99%E7%AE%97/%E5%AD%97%E7%AC%A6%E4%B8%B2%E8%BD%AC%E6%8D%A2%E4%B8%BA%E6%95%B0%E5%80%BC/%E5%AD%97%E7%AC%A6%E4%B8%B2%E8%BD%AC%E6%8D%A2%E4%B8%BA%E6%95%B0%E5%80%BC.cpp)

**字符类别的判断**

- `iscntrl`:控制字符
- `isspace`:空白字符
- `isprint`:显示字符
- `isdigit`:十进制数字
- `isxdigit`:十六进制数字
- `isgraph`:除空白符以外的显示字符
- `issupper`:大写英文字母
- `islower`:小写英文字母
- `isalpha`:英文字母
- `isalnum`:英文字符或数字字符
- `ispunct`:除空白符、数字字符、英文字符以外的显示字符

   *上述任何一个函数只要判断成立就返回除0以外的值，不成立则返回0*

**数字字符和数值间的转换**

`整数值x(0~9) --- x+'0'-->数字字符c('0'~'9')`		            
`整数值x(0~9) <-- c-'0'---数字字符c('0'~'9')`

**strcmp()**

- 头文件：`#include<string.h>`
- 格式：`int strcmp(const char *s1, const char *s2);`
- 功能：比较s1所指的字符串和s2所指的字符串的大小关系(从第一个字符开始逐一比较，当出现不同的字符时，以这对不同字符的大小关系为准)
- 返回值：若s1和s2相等返回0；若s1大于s2则返回正值；若s1小于s2则返回负值


**strncmp()**

- 头文件：`include<string.h>`
- 格式：`int strncmp(const char *s1, const char *s2, size_t);`
- 功能：比较s1所指额字符串和s2所指额字符串的前n个字符的大小关系(从第一个字符开始逐一比较，当出现不同的字符时，以这对不同字符的大小关系为准)
- 返回值：若s1和s2相等返回0；若s1大于s2则返回正值；若s1小于s2则返回负值

**strcpy()**

- 头文件：`#include<string.h>`
- 格式：`char *strcpy(char *s1, const char *s2);`
- 功能：把*s2*指向的字符串复制到*s1*所指向的数组。当 *s2*与*s1*重叠时，作未定义处理
- 返回值：返回*s1*的值

**strcat()**

- 头文件：`#include<string.h>`
- 格式：`char *strcat(char *s1, const char *s2);`
- 功能：把*s2*指向的字符串复制到*s1*指向的数组的末尾。当 *s2*与*s1* 重叠时，作未定义处理
- 代码示例：[显示某几个月的日历.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C6_%E6%97%A5%E5%8E%86/%E6%98%BE%E7%A4%BA%E6%9F%90%E5%87%A0%E4%B8%AA%E6%9C%88%E7%9A%84%E6%97%A5%E5%8E%86/%E6%98%BE%E7%A4%BA%E6%9F%90%E5%87%A0%E4%B8%AA%E6%9C%88%E7%9A%84%E6%97%A5%E5%8E%86.cpp)

**scanf()**

- 头文件：`#include<stdio.h>`
- 格式：`int scanf(const char * restrict format,...);`
- 功能：格式输入函数，即按用户指定的格式从键盘上把数据输入到指定的变量之中。
- 说明：函数的第一个参数是格式字符串，它指定了输入的格式，并按照格式说明符解析输入对应位置的信息并存储于**可变参数列表**中对应的**指针所指位置**。(在实际编程中传入的地址容易搞错)
- 返回值：`scanf`函数返回成功读入的数据项数，读入数据时遇到了“文件结束”则返回EOF
- 代码示例：[为整数数组动态分配储存空间.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C5_%E8%AE%B0%E5%BF%86%E5%8A%9B%E8%AE%AD%E7%BB%83/%E4%B8%BA%E6%95%B4%E6%95%B0%E6%95%B0%E7%BB%84%E5%8A%A8%E6%80%81%E5%88%86%E9%85%8D%E5%82%A8%E5%AD%98%E7%A9%BA%E9%97%B4/%E4%B8%BA%E6%95%B4%E6%95%B0%E6%95%B0%E7%BB%84%E5%8A%A8%E6%80%81%E5%88%86%E9%85%8D%E5%82%A8%E5%AD%98%E7%A9%BA%E9%97%B4.cpp)
- 此外有例如 `scanf("%*s")` 的格式， ` * 是scanf函数中的一种修饰符,表示输入项输入后不转送给任何向量`，解析：[c语言中 scanf("%*s"); 的具体意思](https://zhidao.baidu.com/question/918212479493928779.html)

**calloc()**

- 头文件：`#include<stdlib.h>`
- 格式：`void *calloc(size_t nmemb, size_T size);`
- 功能：为nmemb个大小为size字节的对象分配储存空间，该空间的所有位都会初始化为0
- 返回值：若分配成功，则返回一个指向已分配的空间的开头的指针；若分配失败，则返回空指针
- 代码示例：[为整数数组动态分配储存空间.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C5_%E8%AE%B0%E5%BF%86%E5%8A%9B%E8%AE%AD%E7%BB%83/%E4%B8%BA%E6%95%B4%E6%95%B0%E6%95%B0%E7%BB%84%E5%8A%A8%E6%80%81%E5%88%86%E9%85%8D%E5%82%A8%E5%AD%98%E7%A9%BA%E9%97%B4/%E4%B8%BA%E6%95%B4%E6%95%B0%E6%95%B0%E7%BB%84%E5%8A%A8%E6%80%81%E5%88%86%E9%85%8D%E5%82%A8%E5%AD%98%E7%A9%BA%E9%97%B4.cpp)

**malloc()**

- 头文件：`#include<stdlib.h>`
- 格式：`void *malloc(size_t size);`
- 功能：为大小为size字节的对象分配储存空间，此储存空间的初始值不确定
- 返回值：若分配成功，则返回一个指向已分配的空间的开头的指针；若分配失败，则返回空指针
- 代码示例：[把键盘输入的值存入动态分配的储存空间.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C5_%E8%AE%B0%E5%BF%86%E5%8A%9B%E8%AE%AD%E7%BB%83/%E6%8A%8A%E9%94%AE%E7%9B%98%E8%BE%93%E5%85%A5%E7%9A%84%E5%80%BC%E5%AD%98%E5%85%A5%E5%8A%A8%E6%80%81%E5%88%86%E9%85%8D%E7%9A%84%E5%82%A8%E5%AD%98%E7%A9%BA%E9%97%B4/%E6%8A%8A%E9%94%AE%E7%9B%98%E8%BE%93%E5%85%A5%E7%9A%84%E5%80%BC%E5%AD%98%E5%85%A5%E5%8A%A8%E6%80%81%E5%88%86%E9%85%8D%E7%9A%84%E5%82%A8%E5%AD%98%E7%A9%BA%E9%97%B4.cpp)

**free()**

- 头文件：`#include<stdlib.h>`
- 格式：`void free(void *ptr);`
- 功能：释放ptr所指向的空间，让这部分空间能继续用于之后的动态分配
- 返回值：无
- 代码示例：[把键盘输入的值存入动态分配的储存空间.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C5_%E8%AE%B0%E5%BF%86%E5%8A%9B%E8%AE%AD%E7%BB%83/%E6%8A%8A%E9%94%AE%E7%9B%98%E8%BE%93%E5%85%A5%E7%9A%84%E5%80%BC%E5%AD%98%E5%85%A5%E5%8A%A8%E6%80%81%E5%88%86%E9%85%8D%E7%9A%84%E5%82%A8%E5%AD%98%E7%A9%BA%E9%97%B4/%E6%8A%8A%E9%94%AE%E7%9B%98%E8%BE%93%E5%85%A5%E7%9A%84%E5%80%BC%E5%AD%98%E5%85%A5%E5%8A%A8%E6%80%81%E5%88%86%E9%85%8D%E7%9A%84%E5%82%A8%E5%AD%98%E7%A9%BA%E9%97%B4.cpp)

**time()**

- 头文件：`#include<time.h>`
- 格式：`time_t time(time_t *timer);`
- 功能：决定当前的日历时间。未定义该值得表现形式
- 返回值：用所在编程环境中的最佳逼近返回求出的日历时间。若日历时间无效则返回值`(time_t)-1`，当*timer*不为空指针时，将返回赋给*timer*指向的对象
- 代码示例：[显示当前时间_显示结构体信息](https://github.com/SouthBegonia/Codes_2018/tree/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C6_%E6%97%A5%E5%8E%86)
- 几种时间类型示意图：[几种时间类型.jpg](https://github.com/SouthBegonia/Codes_2018/tree/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C6_%E6%97%A5%E5%8E%86)

**localtime()**

- 头文件：`#include<time.h>`
- 格式：`struct tm *localtime(const time_t *timer);`
- 功能：把*timer*指向的日历时间转换成本地时间表示分解时间
- 返回值：返回指向转换后的对象的指针
- 代码示例：[显示当前时间_显示结构体信息](https://github.com/SouthBegonia/Codes_2018/tree/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C6_%E6%97%A5%E5%8E%86)

**gmtime()**

- 头文件：`#include<time.h>`
- 格式：`struct tm *gmtime(const time_t *timer);`
- 功能：把*timer*指向的日历时间转换成协调世界时表示的分解时间
- 返回值：返回指向转换后的对象的指针
- 代码示例：[显示当前时间(协调世界时UTC格式)](https://github.com/SouthBegonia/Codes_2018/tree/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C6_%E6%97%A5%E5%8E%86)

**asctime()**

- 头文件：`#include<time.h>`
- 格式：`char *asctime(const struct tm *timeptr);`
- 功能：把*timeptr*指向的结构体的分解时间转换成这种形式的字符串 `Sun Sep 12 13:02:41 2018\n\0`
- 返回值：返回指向转换后的对象的指针
- 代码示例：[显示当前时间(asctime函数)](https://github.com/SouthBegonia/Codes_2018/tree/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C6_%E6%97%A5%E5%8E%86)

**ctime()**

- 头文件：`#include<time.h>`
- 格式：`char *ctime(const time_t *timer);`
- 功能：把`timer`指向的日历时间转换成与`asctime`函数具有相同字符串形式的本地时间，等价于`asctime(localtime(timer))`
- 返回值：返回以分解时间为实际参数的`asctime`函数返回的指针

**difftime()**

- 头文件：`#include<time.h>`
- 格式：`double difftime(time_t time1, time_t time0);`
- 功能：计算两个日历时间的差*time1*-*time0*
- 返回值：以秒为单位表示求得的时间差，将其作为*double*型返回

**mktime()**

- 头文件：`#include<time.h>`
- 格式：`time_t mktime(struct tm *timeptr);`
- 功能：把表示*timeptr*指向的结构体中的本地时间的分解时间转换成与*timer*函数的返回值具有相同表现形式的日历时间。忽略结构体 *tm_wday*与*tm_yday*元素的值。
- 返回值：把指定的分解时间转换成*time_t*型的值得表现形式并返回。当无法用日历时间表示时，函数会返回值*(time_t)-1*
- 代码示例：[求星期几(mktime函数)](https://github.com/SouthBegonia/Codes_2018/tree/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C6_%E6%97%A5%E5%8E%86)

**sprintf()**

- 头文件：`#include<stdio.h>`
- 格式：`int sprintf(char *s, const char *format,...);`
- 功能：除了数据的写入方向是*s*指向的数组而不是标准输出流之外，其他与*printf*函数相同。虽然在已入的输出字符串的末尾会添加空字符，但统计返回字符数时不会将该空字符计算在内。在空间重叠的对象间进行复写操作时，作未定义处理
- 返回值：返回已写入数组的不包含空字符的字符数
- 代码示例：[显示某几个月的日历](https://github.com/SouthBegonia/Codes_2018/tree/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C6_%E6%97%A5%E5%8E%86/%E6%98%BE%E7%A4%BA%E6%9F%90%E5%87%A0%E4%B8%AA%E6%9C%88%E7%9A%84%E6%97%A5%E5%8E%86)

**toupper()**

- 头文件：`#include<ctype.h>`
- 格式：`int toupper(int c);`
- 功能：把小写英文字母转换成对应的大写英文字母
- 返回值：如果*c*是小写英文字母，就返回转换成大写英文字母的值，否则直接返回*c*

**tolower()**

- 头文件：`#include<ctype.h>`
- 格式：`int tolower(int c);`
- 功能：把大写英文字母转换成对应的小写英文字母
- 返回值：如果*c*是大写英文字母，就返回转换成小写英文字母的值，否则直接返回*c*

**getch()**

- 头文件：`#include<conio.h>`
- 格式：`int getch(void);`
- 功能：直接从键盘读取字符而不需要再键入回车，且不显示读取的字符
- 返回值：返回读取的字符的值(ASCII码)，错误则返回EOF
- 代码示例：[getch的使用示例](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/C7_%E5%8F%B3%E8%84%91%E8%AE%AD%E7%BB%83/getch%E7%9A%84%E4%BD%BF%E7%94%A8%E7%A4%BA%E4%BE%8B/getch%E7%9A%84%E4%BD%BF%E7%94%A8%E7%A4%BA%E4%BE%8B.cpp)

**getchar()**

- 头文件：`#include<stdio.h>`
- 格式：`int getchar(void);`
- 功能：用户输入的字符被存放在键盘缓冲区中。直到用户按回车为止（回车字符也放在缓冲区中）。当用户键入回车之后，getchar才开始从stdio流中每次读入一个字符。
- 返回值：返回读取的字符的值(ASCII码)，错误则返回EOF

关于 gets/getch/getchar 这几种简单函数区别见 [get类函数区别.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/get%E7%B1%BB%E5%87%BD%E6%95%B0%E5%8C%BA%E5%88%AB.cpp)

**kbhit()**

- 头文件：`#include<conio.h>`
- 格式：`int kbhit(void);`
- 功能：检查当前是否有键盘输入
- 返回值：若有则返回一个非0值，否则返回0
- 代码示例：[kbhit.c](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/kbhit.c)

**putch()**

- 头文件：`#include<conio.h>`
- 格式：`int putch(int c);`
- 功能：在画面上显示字符c(在一些特殊的环境中，如果c是换行符就只换行而不进行返回操作)
- 备注：其中c可以是被单引号（英文状态下）引起来的一个字符，可以是介于0~127之间的一个十进制整型数（包含0和127），也**可以**为char定义好的一个字符型变量
- 返回值：显示成功后返回字符c，错误则返回EOF

**putchar()**

- 头文件：`#include<stdio.h>`
- 格式：`int putchar(int c);`
- 功能：向 *stdout* 输出一个字符，*stdout* 是输出流，可以到屏幕(默认)，也可以到打印机等。
- 备注：其中c可以是被单引号（英文状态下）引起来的一个字符，可以是介于0~127之间的一个十进制整型数（包含0和127），也**可以**是事先用char定义好的一个字符型变量
- 返回值：当输出成功返回字符c，错误则返回EOF

关于 puts/putch/putchar 这几种简单函数区别见 [put类函数区别.cpp](https://github.com/SouthBegonia/Codes_2018/blob/master/BK_%E6%98%8E%E8%A7%A3C%E8%AF%AD%E8%A8%80/put%E7%B1%BB%E5%87%BD%E6%95%B0%E5%8C%BA%E5%88%AB.cpp)


-------------------
**运行错误及解决办法：**
一些在VS 2017下运行出错的情况，及解决方法。

`Error C4996`:

- 错误原因：VS认为该C函数不安全
- 解决办法：在VS`项目-xxx属性-配置属性-C/C++-预处理器-预处理器定义`内添加 `_CRT_SECURE_NO_WARNINGS `  或 在文件顶部加入`#define _CRT_SECURE_NO_WARNINGS`
- 备注：设置非永久性，遇到就得设置

`Error C2440`:

- 错误原因：VS下无法从`void *`转换为`int *`
- 解决办法：强制转换为同一类型，例如：`(int *)(void *)`
- 备注：有强制转换为*显式类型转换*(C++)，无强制转换为*隐式类型转换*(C/C++)，显示类型转换较为妥当。
