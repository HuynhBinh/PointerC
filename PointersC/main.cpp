//
//  main.cpp
//  PointersC
//
//  Created by Binh Huynh on 3/27/16.
//  Copyright © 2016 Binh Huynh. All rights reserved.
//

#include <iostream>

void swap(int *a, int *b);
void swap(int &x, int &y);

int main(int argc, const char * argv[])
{
//    int paul = 21;
//    int *melissa, *dave;
//    melissa = &paul;
//    dave = melissa;
//    
//    *dave = 15;
//    *melissa = 1;
//    
//    std::cout << paul;
//    std::cout << "\n";
//    std::cout << *melissa;
//    std::cout << "\n";
//    std::cout << *dave;
//    std::cout << "\n";
    
    //std::cout << "melisa " << *melissa << " dave " << *dave ;
//    
//    int a = 5, b = 10;
//    int *p1, *p2;
//    p1 = &a;
//    p2 = &b;
//    *p1 = 10;
//    p1 = p2;
//    *p1 = 20;
//    printf("a = %d\n", a);
//    printf("b = %d\n", b);

    
//    int a;
//    int *p;
//    int s;
//    
//   
//    
//    p = &a;
//    
//    *p = 10;
//    a =11;
//    
//     s = *&a;
//    
//    
//    
//    std::cout << s;
//    
//    
//    return 0;

//    int a[5] = {1,2,3,4,5};
//    
//    
//    int *p, *p1;
//    p = &a[0];
//    
//    std::cout << *p << "\n";
//    p=p+3;
//    std::cout << *p << "\n";
//    
//    int *p2;
//    p2 = p++;
//    std::cout << *p2 << "\n";
//    
//    p1 = &a[1];
//    int dave;
//    dave = *(p1+2);
//    printf("*p1 = %d\n", *p1);
//    printf("dave = %d\n", dave);
    
    int x = 50;
    int& y = x;
    y = 27;
    x = 13;
    
    
    std::cout << &x << "\n";
    std::cout << &y;
    
    
    
    int a = 1;
    int b = 2;
    
    int* pa;
    int* pb;
    
    pa = &a;
    pb = &b;
    
    swap(&a, &b);
    
    std::cout << a;
    std::cout << b;
    
    std::cout << "\n";

    
    std::cout << pa;
    std::cout << pb;
    
    std::cout << "\n";
    
    
    // swap(a, b);


    
    

}

void swap(int* ref_a, int* ref_b) //int* is the type to store address of &a
{
    int tempValue;
    tempValue = *ref_a;
    *ref_a = *ref_b;
    *ref_b = tempValue;
}

void swap(int& x, int& y)
{
    int temp;
    temp = x; /* save the value at address x */
    x = y;    /* put y into x */
    y = temp; /* put x into y */
}



