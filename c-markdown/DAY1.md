## DAY1
 有关scanf的用法拓展知识等。
 1、使用scanf的返回值是成功读入的数据项数，读入时遇到文件结束返回“EOF”,因而有：
``` c
while（scanf（"%d",&a）!= EOF);
int v;
v = scanf("%d%d",&a,&b);//若输入成功则v = 2。
```
可以用于检验。
2、**只有%c输入字符，空格才会被输入！！**
**其他都是读到空格就停止。**
3、double型时scanf对应为**%lf%lf%lf**
重要的话说三遍。
4、如何让scanf()函数正确接受有空格的字符串？如: I love you!
``` c
#include<stdio.h>
int main(void)
{
char str[50];
scanf("%[^\n]",str);/*scanf("%s",string);不能接收空格符*/
printf("%s\n",str);
return 0;
}
```
**第五行中%[]用以扫描括号内的所有内容，^的意思为补集。该语句的意思是扫描除'\n'以外的所有内容。因而空格可以被扫描进入。**
5、fflush(stdin)这个方法在GCC下不可用。（在VC6.0下可以），用以清空缓冲区。

标题
==

 
 