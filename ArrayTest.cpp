//
// Created by Krishna Lingampalli on 10/31/15.
//

#include <time.h>
#include <iostream>
#include "Array.h"

using namespace std;

int main(){


    Array<int> myArray;

    int n= 2000;
    clock_t  start,end;
    start = clock();
    for (int i = 1; i<n+1; i++ )
    {
        myArray.insert(((myArray.getSize()/2)-1), i);                    // insert into the middle of the list minus one node
    }
    end = clock();
    cout<<"Time required for execution for Array with n = 2000 elements: "<< (double)(end-start)/CLOCKS_PER_SEC<< " seconds." << "\n\n";


// test for  n elements = 4000

    Array<int> myArray2;

    int n2= 4000;
    clock_t  start2,end2;
    start2 = clock();
    for (int i = 1; i<n2+1; i++ )
    {
        myArray2.insert(((myArray2.getSize() / 2) - 1), i);                    // insert into the middle of the list minus one node
    }
    end2 = clock();
    cout<<"Time required for execution for Array with n = 4000 elements: "<< (double)(end2-start2)/CLOCKS_PER_SEC<< " seconds." << "\n\n";



// test for  n elements = 6000

    Array<int> myArray3;

    int n3= 6000;
    clock_t  start3,end3;
    start3 = clock();
    for (int i = 1; i<n3+1; i++ )
    {
        myArray3.insert(((myArray3.getSize() / 2) - 1), i);                    // insert into the middle of the list minus one node
    }
    end3 = clock();
    cout<<"Time required for execution for Array with n = 6000 elements: "<< (double)(end3-start3)/CLOCKS_PER_SEC<< " seconds." << "\n\n";



// test for n elements = 8000

    Array<int> myArray4;

    int n4= 8000;
    clock_t  start4,end4;
    start4 = clock();
    for (int i = 1; i<n4+1; i++ )
    {
        myArray4.insert(((myArray4.getSize() / 2) - 1), i);                    // insert into the middle of the list minus one node
    }
    end4 = clock();
    cout<<"Time required for execution for Array with n = 8000 elements: "<< (double)(end4-start4)/CLOCKS_PER_SEC<< " seconds." << "\n\n";

//test for n elements = 10000

    Array<int> myArray5;

    int n5= 10000;
    clock_t  start5,end5;
    start5 = clock();
    for (int i = 1; i<n5+1; i++ )
    {
        myArray5.insert(((myArray5.getSize() / 2) - 1), i);                    // insert into the middle of the list minus one node
    }
    end5 = clock();
    cout<<"Time required for execution for Array with n = 10000 elements: "<< (double)(end5-start5)/CLOCKS_PER_SEC<< " seconds." << "\n\n";

    return 0;
}
