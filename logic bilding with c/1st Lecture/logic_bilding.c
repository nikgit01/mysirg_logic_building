

// =================================[ find the redius the circle ]=======================================



// #include<stdio.h>


// void main()
// {
//     float pai=3.1415;
//     float redius;

//     printf("Enter the redius of circle:");
//     scanf("%f",&redius);
//     float area=pai*redius*redius;
//     printf("\nThe area of circle is : %f",area);

// }


// =================================[ Swap the two number ]=======================================


// #include<stdio.h>
// void main ()
// {

//     int a=10;
//     int b=20;
//     int temp;
//     printf(" a= %d \n b= %d\n",a,b);
    
//     temp=a;
//     a=b;
//     b=temp;
//     printf("after swaping\n a= %d\n b= %d",a,b);

// ===========>2nd method

      


    
// }

// =================================[ Check the number is positive or not ]=======================

// #include<stdio.h>

// void main()
// {
//     int num;
//     printf("Enter the number you want to check:");
//     scanf("%d",&num);

//     if(num>0)
//         printf("\nThe number %d is positive\n",num);
//     else if(num=0)
//         printf("The number is non poitive or nor negative");
//     else
//         printf("The nubmer %d is negative ",num);
        

// }


// ===============================[ Check the given number is odd or even ]=======================
// #include<stdio.h>

// void main()
// {
//     int num;
//     printf("Enter the number you want to check:");
//     scanf("%d",&num);

//     int r = num%2;
//     if(r==0)
//         printf("The given number is even\n");
//     else
//         printf("The given number is odd");

// }

// =================================[ quiz question  ]======================================

// #include<stdio.h>

// void main()
// {
//     int num = 0;
// for (int i = 1; i <= 5; i++) {
//     if (i % 2 == 0) {
//         num += i;
//     } else {
//         num -= i;
//       }
// }
// printf("%d",num);

// }


// =====================[ print the greatest number among the 3 numbers  ]=======================

// #include<stdio.h>

// int main()
// {
//     int a=40,b=20,c=40;

//     if(a>=b&&a>=c)
//         printf("%d",a);
//     else if(b>=a&&b>=c)
//         printf("%d",b);
//     else 
//         printf("%d",c);
//      return 0;
// }

// =====================[ print the greatest number among the 3 numbers with new logic ]=======================


// #include<stdio.h>

// int main()
// {
//         int a,b,c;
//         printf("Enter the 3 differeant number you want to compare:");
//         scanf("%d%d%d ",&a,&b,&c);

//     if(a>b)
//     {
//         if(a>c)
//           printf("%d",a);
//         else
//           printf("%d",c);
//     }
//     else
//     {
//         if(b>c)
//           printf("%d",b);
//         else
//           printf("%d",c);
//     }

//      return 0;
// }




// ==========[ print the greatest number among the 3 numbers with (" WITH CONDITIONAL OPERATOR ") ]===========


#include<stdio.h>

int main()
{
        int a,b,c;
        printf("Enter the 3 differeant number you want to compare:");
        scanf("%d%d%d ",&a,&b,&c);

    printf("%d", a>b ? a>c?a:c: b>c?b:c);
     return 0;
}




// =====================[ above same question for quiz  ]============================

// #include<stdio.h>

// int main(){
// int a=40,b=40,c=20;
// if(a>=b&&a>=c)
//     printf("%d ",a);
// if(b>=a&&b>=c)
//     printf("%d ",b);
// if(c>=b&&c>=a)
//     printf("%d ",c);

//     return 0;
// }

