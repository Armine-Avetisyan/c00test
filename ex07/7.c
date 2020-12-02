//#include <unistd.h>
#include <stdio.h>

void    ft_putnbr(int nb);

void new(int c);

int main()
{
   ft_putnbr(4239);

    return 0;
}


void    ft_putnbr(int nb)
{
    int size = 1;
    int a = nb;
    int bool = 0;
    while (size <= 10000000000)
    {
        if(a / size == 0){
            break;
        }
        size*=10;


    }
    size = size /10;
    int number = nb;

while(size > 0) {
    int aa = number / size;
    printf("%d", aa);
    number = number % size;
    printf(" ");
    size = size /10;
}
}
