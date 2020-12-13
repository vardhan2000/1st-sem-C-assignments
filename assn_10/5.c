#include<stdio.h>
#include<stdlib.h>

int main()
{
    int deg1, deg2;//storing the degree of polynomial in deg1 and deg2 respectively
    int i, j;
    
    scanf("%d", &deg1);//taking the degree of polynomial 1 as input
    double *poly1 = (double *)malloc((deg1 + 1) * sizeof(double));//dynamically allocating memory for polynomial 1

    //scanning the coefficients of polynomial 1
    for(i = 0; i < deg1 + 1; i++)
        scanf("%lf", &poly1[i]);

    scanf("%d", &deg2);//taking the degree of polynomial 2 as input
    double *poly2 = (double *)malloc((deg2 + 1) * sizeof(double));//dynamically allocating memory for polynomial 2

    //scanning the coefficients of polynomial 2
    for(i = 0; i < deg2 + 1; i++)
        scanf("%lf", &poly2[i]);

    //printing the degree and the coefficients of the added polynomial till two decimals
    if(deg1 <= deg2)
    {
        printf("%d ", deg2);
        for(i = 0; i < deg2 + 1; i++)
        {
            if(i < deg2 - deg1)
                printf("%.2lf ", poly2[i]);

            else
                printf("%.2lf ", poly1[i - deg2 + deg1] + poly2[i]);
        }
    }

    else if(deg1 > deg2)
    {
        printf("%d ", deg1);
        for(i = 0; i < deg1 + 1; i++)
        {
            if(i < deg1 - deg2)
                printf("%.2lf ", poly1[i]);

            else
                printf("%.2lf ", poly1[i] + poly2[i - deg1 + deg2]);
        }
    }

    printf("\n%d ", deg1 + deg2);//printing the degree of product of polynomials
    double arr1[deg1 + 1], arr2[deg2 + 1];//declaring array for storing the degrees of corresponding terms of the polynomials
	int a = (deg1 + 1) * (deg2 + 1);
    double arr[a];//declaring an array for storing the addition of degrees of corresponding terms
    double arr_prod[a];//declaring an array for storing the product of coefficients of corresponding terms

    //storing the degrees of corresponding terms of the polynomials in arr1 
    for(i = 0; i < deg1 + 1; i++)
        arr1[i] = deg1 - i;

    //storing the degrees of corresponding terms of the polynomials in arr2
    for(i = 0; i < deg2 + 1; i++)
        arr2[i] = deg2 - i;

    for(i = 0; i < deg1 + 1; i++)
    {
        for(j = 0; j < deg2 + 1; j++)
        {
            arr[(deg2 + 1) * i + j] = arr1[i] + arr2[j];//storing the addition of degrees of corresponding terms
            arr_prod[(deg2 + 1) * i + j] = poly1[i] * poly2[j];//storing the product of coefficients of corresponding terms
        }
    }
        
  	int n = deg1 + deg2;
    double sum;
    double *poly_final = (double *)calloc(deg1 + deg2 + 1, sizeof(double));//dynamically allocating the memory for storing the coefficients of the final polynomial
    int count = 0;
    
    while(n >= 0)
    {
        sum = 0;
        for(i = 0; i < (deg1 + 1) * (deg2 + 1); i++)
        {
            //adding the terms with the same degree and then storing them in poly
            if(arr[i] == n)
                sum += arr_prod[i];
        }
        poly_final[count] = sum;
        count++;
        n--;
    }

    //printing the coeffecients of final polynomial
    for(i = 0; i < deg1 + deg2 + 1; i++)
        printf("%.2lf ", poly_final[i]);
    
    //freeing the allocated memory
    free(poly1);
    free(poly2);
    free(poly_final);
    
    return 0;
}
