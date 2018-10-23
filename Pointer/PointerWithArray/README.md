# 指针与数组
--------------
参考资料：
- 《深入理解C指针》
- 《指针的编程艺术》
- [数组指针和指针数组的区别——jack_孟](https://www.cnblogs.com/mq0036/p/3382732.html)
-----------------
> 数组：能用索引访问的同质元素连续集合(内存连续)

## 数组和指针的相似处
我们可以把数组**下标**用在指针上，即：
`*(p + i)` 等价于 `p[i]`

指针的**加减运算**对于数组同样实用，即数组名加减整数：
`*(p + i)` 等价于 `*(array + i)`


## 数组和指针的差别
1.`array[i]` 与 `*(array+i)` 结果相同，生成的机器码却不同
- `array[i]`：从 *array* 位置开始，移动 *i* 个位置，再取出内容
- `*(array+i)`：从 *array* 位置开始，在地址上增加 *i* ，然后取出这个地址中的内容

2.`sizeof`操作符对他们的操作不同
有代码例如
```
int array[5] = {1,2,3,4,5};
int *p = array;
```
则
- `sizeof(array)`：返回20，即**数组分配的字节数** *4X5*
- `sizeof(p)`：返回4，即**指针长度**

## 数组指针(行指针)
- 定义：**int (*p)[n]**
- 声明解释：定义一个 指向整数型的一维数组(长度为n) 的**指针**
- 应用：
```
int array[3][4];
int (*p)[4];
p = array;
```
- `++p`: `p` 由行 `array[0][]`指向行`array[1][]`，也可直接理解为 `array[0][0]`指向 `array[1][0]`
- `++array`：数组不等于指针，不存在指向，错误信息`[Error] lvalue required as increment operand`
- `p+i`：等价于 `array+i` 和 `p[i]`，同理也是 `array[0][]`到`array[2][]`的过程 

代码事例：