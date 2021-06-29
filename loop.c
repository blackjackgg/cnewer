//
// Created by Administrator on 2021/6/29.
//

int sum100(void)
{
    int i;
    int sum = 0;
    for (i=1; i<=100; ++i)  //++是自加的意思, ++i相当于i = i + 1
    {
        sum +=  i;
    }
    printf("sum = %d\n", sum);
    return 0;
}

