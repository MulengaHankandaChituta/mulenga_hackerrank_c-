#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i;
    long long l;
    char c;
    float f;
    double d;

    scanf("%d %lld %c %f %lf", &i, &l, &c, &f, &d);

    printf("%d\n", i);
    printf("%lld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);

    return 0;
}