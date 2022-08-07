#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code.
    int value1;
   
    long value2;
   
    char value3;
   
    float value4;
   
    double value5;
    
    cin>>value1>>value2>>value3>>value4>>value5;

    cout<<value1<<endl<<value2<<endl<<value3<<endl;
    
    /*setprecision()
	Setprecision when used along with ‘fixed’ provides precision to floating-point numbers correct to decimal numbers mentioned in the brackets
 	of the setprecision. It is defined in header file <iomanip> or <bits/stdc++.h>.*/
    cout<<fixed <<setprecision(3)<<value4<<endl;
    cout<<fixed <<setprecision(9)<<value5<<endl;
     
    return 0;
}

