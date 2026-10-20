#include <stdio.h>
int main(void)
{
    //表头
    printf("%6s  %-12s  %10s\n", "编号", "商品名称", "单价");
    //4行商品数据
    printf("%6d  %-12s  %10.2f\n", 1001, "apple", 5.50);
    printf("%6d  %-12s  %10.2f\n", 1002, "banana", 3.20);
    printf("%6d  %-12s  %10.2f\n", 1003, "orange", 4.80);
    printf("%6d  %-12s  %10.2f\n", 1004, "grape", 9.90);

    return 0;
}