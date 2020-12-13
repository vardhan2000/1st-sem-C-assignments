#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

//defining a function to print an integer using putchar
void print(int n)
{
    char *ptr = (char *)malloc(50000000 * sizeof(int));// dynamically allocating space for storing the digits to be printed using putchar
    int count = 0;// takes into account the no. of digits in the no. 
    
    // converting each digit to char and storing it in ptr
    while(n > 0)
    {
        char c = (n % 10) + '0';
        n = n / 10;//updating n
        ptr[count] = c;//storing a in ptr
        count++;//updating count
    }

    //printing the no. digit wise
    for(int i = 0; i < count + 1; i++)
        putchar(ptr[count - i]);

    free(ptr);//freeing the dynamically allocated memory
}

//defining a minprint function using variable length argument
void minprint(char *fmt,...)
{
    va_list ap;//to hold information about variable arguments 
    va_start(ap, fmt);//initialize valist 
    char *temp;//using temp to traverse through the fmt string

    for(temp = fmt; *temp != '\0'; temp++)
    {
        //print the characters as they are until we reach '%'
        if(*temp != '%')
            putchar(*temp);
        
        //when we reach '%' look for what is the character just next to it
        else if(*temp == '%')
        {
            temp++;

            //if the char next to '%' is c then print the corresponding char in va_list using putchar 
            if(*temp == 'c')
                putchar((char)(va_arg(ap, int)));

            //if the char next to '%' is d then print the corresponding int in va_list using print function created above
            else if(*temp == 'd')
            {
                int a = va_arg(ap, int);//storing the corresponding argument in the variable in a 
                
                //if a greater than or equal to zero then print a using print()
                if(a >= 0)
                    print(a);

                //if a less than zero then put '-' and then print -a using print()
                else
                {
                    putchar('-');
                    print(-a);
                }
            }
        }
    }
    va_end(ap);//clean memory reserved for va_list 
}
int main()
{
    minprint("my age is %d %c hola ",-30, 's');
    return 0;
}
