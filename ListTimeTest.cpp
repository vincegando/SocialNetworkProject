//
// Created by Krishna Lingampalli on 10/31/15.
//


#include <time.h>
#include <iostream>
#include "List.h"

using namespace std;

int main(){

    List<int> myList;

    int n= 2000;
    clock_t  start,end;
    start = clock();
    for (int i = 1; i<n+1; i++ )
    {
        myList.insert(((myList.size()/2)-1), i);                    // insert into the middle of the list minus one node
    }
    end = clock();
    cout<<"Time required for execution for List with n = 2000 elements: "<< (double)(end-start)/CLOCKS_PER_SEC<< " seconds." << "\n\n";


// test for  n elements = 4000

    List<int> myList2;

    int n2= 4000;
    clock_t  start2,end2;
    start = clock();
    for (int i = 1; i<n2+1; i++ )
    {
        myList2.insert(((myList2.size() / 2) - 1), i);                    // insert into the middle of the list minus one node
    }
    end2 = clock();
    cout<<"Time required for execution for List with n = 4000 elements: "<< (double)(end2-start2)/CLOCKS_PER_SEC<< " seconds." << "\n\n";



// test for  n elements = 6000

    List<int> myList3;

    int n3= 6000;
    clock_t  start3,end3;
    start3 = clock();
    for (int i = 1; i<n3+1; i++ )
    {
        myList3.insert(((myList3.size() / 2) - 1), i);                    // insert into the middle of the list minus one node
    }
    end2 = clock();
    cout<<"Time required for execution for List with n = 6000 elements: "<< (double)(end3-start3)/CLOCKS_PER_SEC<< " seconds." << "\n\n";



// test for n elements = 8000

    List<int> myList4;

    int n4= 8000;
    clock_t  start4,end4;
    start4 = clock();
    for (int i = 1; i<n4+1; i++ )
    {
        myList4.insert(((myList4.size() / 2) - 1), i);                    // insert into the middle of the list minus one node
    }
    end4 = clock();
    cout<<"Time required for execution for List with n = 8000 elements: "<< (double)(end4-start4)/CLOCKS_PER_SEC<< " seconds." << "\n\n";

//test for n elements = 10000

    List<int> myList5;

    int n5= 10000;
    clock_t  start5,end5;
    start5 = clock();
    for (int i = 1; i<n5+1; i++ )
    {
        myList5.insert(((myList5.size() / 2) - 1), i);                    // insert into the middle of the list minus one node
    }
    end5 = clock();
    cout<<"Time required for execution for List with n = 10000 elements: "<< (double)(end5-start5)/CLOCKS_PER_SEC<< " seconds." << "\n\n";

    return 0;
}