// Lab1C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>

int main()
{
    int num;
    int num2;
    int i;
    printf("Enter two integers: ");
    scanf_s("%d %d", &num , &num2);
    int *R = new int[(num)]; 
    int *N = new int[(num)];
    for (i = 1; i <= (num); i++) { 
        if (num % i == 0) {
            R[i -1] = num / i;
            if (num / i == i)
                printf("%d ", i);
            else {
                printf("%d ", i);       
            }
        }
    }
    for (i = 1; i <= (num2); i++) {
        if (num2 % i == 0) {
            N[i - 1] = num2 / i;
            if (num2 / i == i)
                printf("%d ", i);
            else {
                printf("%d ", i);
            }
        }
    }

    for (i = 0; i <= sizeof(R); i++) {
        for (int j = 0; j <= sizeof(N); j++) {
            if (R[i] == N[j]) {
                printf("%d \n", i);
            }
            else {
                continue;
            }
        }
    }
}

// Odd Even
//int num;
//printf("Enter an integer: ");
//scanf_s("%d", &num);
//
//// true if num is perfectly divisible by 2
//if (num % 2 == 0)
//printf("%d is even.", num);
//else
//printf("%d is odd.", num);
//
//return 0;


//HigherLower
//int num;
//int num2;
//printf("Enter 2 integers: ");
//scanf_s("%d %d", &num, &num2);
//
//if (num > num2) {
//	printf("%d is the highest", num);
//}
//else {
//	printf(" %d is the highest", num2);
//}

//Average
//int num;
//int num2;
//int num3;
//printf("Enter three integers: ");
//scanf_s("%d %d %d", &num, &num2, &num3);
//int average;
//average = (num + num2 + num3) / 3;
//printf("%d is the average  ", average);

//Summnation
//int num;
//int num2;
//int num3;
//int num4;
//printf("Enter four integers: ");
//scanf_s("%d %d %d %d", &num, &num2, &num3, &num4);
//int summnation;
//summnation = (num + num2 + num3 + num4);
//printf("%d is the summnation ", summnation);


//HelloWorld
//int num;
//printf("Enter an integer: ");
//scanf_s("%d", &num);
//while (num > 0) {
//	printf("Hello World!");
//	num--;
//}

//2
//int num;
//int num2;
//printf("Enter two integers: ");
//scanf_s("%d %d", &num, &num2);
//while (num2 > 0) {
//	printf("%d ", num);
//	num2--;
//}

//Primenumber
//int num;
//int i;
//bool isprime = true;
//printf("Enter a integer: ");
//scanf_s("%d", &num);
//for (i = 2; i <= num / 2; ++i) {
//    if (num % i == 0) {
//        isprime = false;
//        break;
//    }
//}
//
//if (isprime) {
//    printf("%d is a prime number", num);
//
//}
//else {
//    printf("%d is not a prime number", num);
//}

//FACTORIAL??????
//int num;
//int i;
//int num2 = 1;
//printf("Enter a integer: ");
//scanf_s("%d", &num);
//for (i = num; i > 0; --i) {
//    num = num * (num - num2);
//    num2++;
//}
//printf("%d is the factorial", num);

/* storing divisors 
    int num;
    int i;
    printf("Enter a integer: ");
    scanf_s("%d", &num);
    int *R = new int[(num)]; //sqrt?
    for (i = 1; i <= (num); i++) { //sqrt?
        if (num % i == 0) {
            R[i -1] = num / i;
            if (num / i == i)
                printf("%d \n", i);
            else {
                printf("%d \n", i);
  
               
            }
        }
    }

    for (i = 0; i <= sizeof(R); i++) {
        if (R[i] > 0) {
            printf("array input : ");
            printf("%d \n", R[i]);
        }
    }*/