#include <cstdio>
#include <algorithm>

using namespace std;

int n;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    scanf("%d", &n);
    printf("%d", fibonacci(n));
}