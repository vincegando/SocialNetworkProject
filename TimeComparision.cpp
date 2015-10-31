//
// Created by Krishna Lingampalli on 10/31/15.
//

#include <time.h>
#include <iostream>
#include "Array.h"
#include "List.h"

using namespace std;


int main(){
    clock_t  start,end;
    start = clock();

    //perform the list function calls here
    cout<< "Enter a number n of the number of elements you want to insert into your array"<<endl;
    int n;
    int t= 30;
    cin >> n;              // read in numebr of inputs to read into user list
    for (int i= 1; i<n+1; i++ )
    {
        insert(int pos, const X & item)
        t++;
    }

    end = clock();
    cout<<"Time required for execution for List implementation: "<< (double)(end-start)/CLOCKS_PER_SEC<< " seconds." << "\n\n";








    start = clock();           //reset clock() time

    //perform the Array insert function calls here
    cout<< "Enter a number n of the number of elements you want to insert into your array"<<endl;
    int m;
    int r= 30;
    cin >> m;                    // read in user input for # of elements to insert into array
    for (int i= 1; i<m+1; i++ )
    {
        insert(int array().size/2, r);
        r++

    }

    end = clock();
    cout<<"Time required for execution for Array implementation: "<< (double)(end-start)/CLOCKS_PER_SEC<< " seconds." << "\n\n";




    return 0;
}