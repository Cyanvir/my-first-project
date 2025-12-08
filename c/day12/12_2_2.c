// 实例中 populate_array() 函数定义了三个参数，其中第三个参数是函数的指针，通过该函数来设置数组的值。

// 实例中我们定义了回调函数 getNextRandomValue()，它返回一个随机值，它作为一个函数指针传递给 populate_array() 函数。

// populate_array() 将调用 10 次回调函数，并将回调函数的返回值赋值给数组。
#include <stdlib.h>  
// stdlib.h：提供两个关键内容：
// rand()：生成伪随机数的函数（0 ~ RAND_MAX，通常是 32767）；
// size_t：标准无符号整型（专门用来表示 “数组长度 / 内存大小”，比int更规范，避免负数问题）。
#include <stdio.h>
#include <time.h>
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i=0; i<arraySize; i++)
        array[i] = getNextValue();
}
 
// 获取随机值
int getNextRandomValue(void)
{
    return rand();
}
 
int main(void)
{
    srand((unsigned)time(NULL));
    int myarray[10];
    /* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
    populate_array(myarray, 10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");
    return 0;
}