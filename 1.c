#include <stdio.h>

#define PI 3.14

int main()
{

  printf("%f",3*PI);
  return 0;
}




// #define ADD 2+3

// int main()
// {
 
//   printf("%d",ADD*ADD); //打印11
// }



#define ADD (2+3)

int main()
{
 
  printf("%d",ADD*ADD); //打印25
}



/**************
 * 宏 后面加括号
**************/

/********************/

// #字符串化
#include <stdio.h>

#define ABC(x) #x

int main()
{
 
  printf("%s",998);//打印结果错误
  printf("%s",ABC(998));//将998变为字符串，打印结果正确
}

/**************************/
##连接符

#include <stdio.h>

#define DAY(x) myday##x

int main()
{
  unsigned char myday1=10;
  unsigned char myday2=20;
  printf("the day is %d\n",DAY(2));
}

/**************************/

#include <stdio.h>

#define ABC //调试模式不注释，发行版注释
int main()
{
    #ifdef ABC
    printf("FILE IS==%s==\n",__FILE__);
    printf("FUNCTION IS==%s==\n",__FUNCTION__);
    printf("LINE IS==%d==\n",__LINE__);
    #endif
    printf("hello world!\n");

}
