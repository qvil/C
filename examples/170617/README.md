## 안됨(Warning)

```c
#include <stdio.h>

int main(void)
{
    int c = 10;
    int d = 20;
    int result;

    result = sum(c, d);

    printf("%d\n", result);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
```

## 되는거
```c
#include <stdio.h>

int sum(int a, int b); // 선언한거

int main(void)
{
    int c = 10;
    int d = 20;
    int result;

    result = sum(c, d);

    printf("%d\n", result);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
```

### 답
```
30
```