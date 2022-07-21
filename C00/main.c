#include <unistd.h>
int main()
{
	void ft_print_comb2(void);
	ft_print_comb2();	
	return 0;
}
void ft_print_comb2(void)
{
    int count1 = 0;
    int count2 = 0;
    int first_digit_1 = 0;
    int first_digit_2 = 0;
    int second_digit_1 = 0;
    int second_digit_2 = 0;
    
    while(count1 <= 98)
    {
        while(count2 <= 99)
        {
            first_digit_1 = count1 / 10 + 48;
            second_digit_1 = count1 % 10 + 48;
            first_digit_2 = count2 / 10 + 48;
            second_digit_2 = count2 % 10 + 48;
            write(1,&first_digit_1,1);
            write(1,&second_digit_1,1);
            write(1," ",1);
            write(1,&first_digit_2,1);
            write(1,&second_digit_2,1);
            write(1,", ",2);
            count2++;
        }
        count1++;
        count2 = count1 + 1;
    }
}
