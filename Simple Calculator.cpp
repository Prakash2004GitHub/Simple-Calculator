#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	int n;
	while (1) {
        printf("Enter an operator (+, -, *, /), "
               "if want to exit press x: \n");
        scanf(" %c", &ch);
 
        // to exit
        if (ch == 'x')
            exit(0);
        	
    switch(ch){
    	 
    	case '+':
    	//Addition
    {		
    	printf("Enter the no. of numbers you want to input: \n");
        scanf("%d", &n);
        
        int num;
        int sum;
		printf("Enter %d integers:\n", n);
        for(int i=0; i<n; i++){
        	scanf("%d", &num);
	        sum+=num;
    }
    printf("The sum of the entered integers is: %d\n", sum);
    break;
}
    
       case '-':
       	//Subtraction
       	{
       	printf("Enter the no. of numbers you want to input: \n");
        scanf("%d", &n);
        
        int p;
        int diff;
		printf("Enter %d integers:\n", n);
        for(int i=0; i<n; i++){
        	scanf("%d", &p);
	        diff-=p;
    }
    printf("The diff of the entered integers is: %d\n", diff);
    break;
}
    case '*':
    	//Multiplication
{    	
    	printf("Enter the no. of numbers you want to input: \n");
        scanf("%d", &n);
        
        int m;
        int prod=1;
		printf("Enter %d integers:\n", n);
        for(int i=0; i<n; i++){
        	scanf("%d", &m);
	        prod*=m;
    }
    printf("The product of the entered integers is: %d\n", prod);
    break;
}
    	case '/':
    	//Division
{
    		double a, b;
    		printf("Enter two integers: \n");
    		scanf("%lf%lf", &a,&b);
            printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
            break;
}
            default:
            printf(
                "Error! please write a valid operator\n");
            }
        }
    
	}
    	

