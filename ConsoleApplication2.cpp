#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("CHAR MIN = %lf\n ", SCHAR_MIN);
    printf("CHAR MAX = %lf\n ", SCHAR_MAX);
    printf("INT MIN =  %lf\n ", SHRT_MIN);
    printf("INT MAX =  %lf\n ", SHRT_MAX);
    printf("DOUBLE MIN = %lf\n ", DBL_MIN);
    printf("DOUBLE MAX = %lf\n ", DBL_MAX);
    printf("FLOAT MIN = %lf\n", FLT_MIN);
    printf("FLOAT MAX = %lf\n ", FLT_MAX); // 각각의 자료형에 대한 저장되어있는 최대/최솟값을 printf로 출력
    return 0;
}