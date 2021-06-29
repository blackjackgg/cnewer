# include <stdio.h>
# include <stdlib.h>

// c语言入门案例
//1.写函数  写遍历  写while  写判断语句   引用其他包   写类？  编写头文件  编写dll 编写cmake python调用c语言 编译c语言为exe程序

void fuck(){   //写函数
    int a =5;
    int b =6;
    char str[25];
    int c = a +b;
    const char *d = itoa(c, str, 10);
    const char *q = "6666";
    printf("%s\n", d);
    printf("%s\n", q);

}

int main() {
    printf("fuck, World!\n");
    fuck();
    hello();
    hellostatic();
    return 0;
}



