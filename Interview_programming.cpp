// Basic Programming Questions (Syntax & Logic)
// 1. Write a program to print "Hello, World!".
// 2. Take two numbers as input and print their sum.
// 3. Check if a number is even or odd.
// 4. Find the maximum of three numbers.
// 5. Check if a year is a leap year.
// 6. Print numbers from 1 to N using a loop.
// 7. Find the sum of first N natural numbers.
// 8. Print the multiplication table of a number.
// 9. Calculate the factorial of a number (using loop).
// 10. Calculate the power of a number without using built-in function.

#include<iostream>
using namespace std;

int main()
{
    // 1.
    // cout<<"Hello";

    // 2.
    // int a,b;
    // cin>>a>>b;
    // cout<<a+b;

    // 3.
    // int a;
    // cin>>a;
    // if(a%2==0)
    // {
    //     cout<<"even";
    // }
    // else{
    //     cout<<"odd";
    // }

    // 4.
    // int a,b,c;
    // cin>>a>>b>>c;
    // if(a>b){
    //     if(a>c){
    //         cout<<"A is greater";
    //     }
    //     else{
    //         cout<<"c is greater";
    //     }
    // }
    // else if(b>c){
    //     cout<<"b is greater";
    // }
    // else{
    //      cout<<"c is greater";
    // }

    // 6.
    // int n;
    // cin>>n;
    // for(int i=1;i<=n; i++)
    // {
    //     cout<<i<<" ";
    // }

    // 7.
    // int n;
    // cin>>n;
    // int sum=0;
    // for(int i=1;i<=n; i++)
    // {
    //   sum= sum+i;
    // }
    // cout<<sum;

    // 8.
    // int n;
    // cin>>n;
    // for(int i=1; i<=10; i++)
    // {
    //     int s=n*i;
    //     cout<<s<<" ";
    // }

    // 9.
//     int n;
//     cin>>n;
//     for(int i=n-1; i>=1; --i)
//     {
//         n=n*i;    
//     }
//       cout<<n;

        // 10.
        // int n;
        // cin>>n;
        // cout<<n*n;

//     Find whether a number is a prime number.
// 12. Print all prime numbers between 1 to N.
// 13. Reverse a given number.
// 14. Check if a number is a palindrome.
// 15. Find the GCD and LCM of two numbers.
// 16. Print Fibonacci series up to N terms.
// 17. Count the number of digits in a number.
// 18. Find the sum of digits of a number.
// 19. Find Armstrong numbers between 1 to 1000.
// 20. Print pattern programs (stars, numbers, pyramid, etc.).

//     int a;
//     cin>>a;
//    int i=2,c=0,b=0;
//    while(a>i)
//     {
//         if(a%i==0)
//         {
//             b++;
//             break;
//         }
//         else{
//             c++;
//         }
//         i++;
//     }
//     if(b==1)
//     {
//         cout<<"not prime";
//     }
//     else{
//         cout<<"prime";
//     }


    // int n;
    // cin>>n;
    // while(n)
    // {
    //    int r=n%10;
    //     cout<<r;
    //     n=n/10;
    // }

    // int a,r=0,p;
    // cin>>a;
    // p=a;
    // while(a>0)
    // {
    //     int d= a%10;
    //     r=r*10+d;
    //     a=a/10;
    // }
    // if(r==p)
    //     cout<<"palindrom";
    // else
    //     cout<<"not palindrome";


//     #include <iostream>
// using namespace std;

// Function to find GCD using Euclidean algorithm
// int findGCD(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// // Function to find LCM using GCD
// int findLCM(int a, int b) {
//     return (a * b) / findGCD(a, b);
// }

// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     int gcd = findGCD(num1, num2);
//     int lcm = findLCM(num1, num2);

//     cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
//     cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

//     return 0;
// }


    // int n;
    // cin>>n;
    // int a=-1, b=1,d=0;
    // while(n > d){
    //     int c=a+b;
    //     cout<<c;
    //     a=b;
    //     b=c;
    //     d++;
    // }


    // int n, d=0;
    // cin>>n;
    // while(n > 0)
    // {
    //     n=n/10;
    //     d++;
    // }
    // cout<<d;

    // int n, d=0;
    // cin>>n;
    // while(n>0)
    // {
    //     d=d+n%10;
    //     n=n/10;
    // }
    // cout<<d;

    // int n,d,r=0;
    // cin>>n;
    // int a=n;
    // while(n> 0)
    // {
    //     d= n%10;
    //    r=r+d*d*d;
    //    n=n/10;
    // }
    // if(a==r)
    // {
    //     cout<<"armstrong no";
    // }
    // else
    //     {
    //         cout<<"Not armstrong no";
    //     }

//     21. Find the largest/smallest element in an array.
// 22. Sort an array using bubble/selection/insertion sort.
// 23. Find the sum and average of elements in an array.
// 24. Search an element in an array (linear & binary search).
// 25. Reverse an array.
// 26. Remove duplicates from an array.
// 27. Merge two arrays.
// 28. Count frequency of each element in an array.
// 29. Check if two strings are anagrams.
// 30. Reverse a string without using built-in functions.

    int a[4]=  {3,2,6,5};

    for(int i=0; i<a[i]; i++)
    {
        for(int j=i+1; j<a[j]; j++)
        {
            if(a[i]>=a[j])
            {
                
            }
        }

    }

}

