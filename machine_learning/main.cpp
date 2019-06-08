#include <iostream>
#include <climits>
#include <cfloat>

using std::cout;  
using std::cin;
using std::endl;

int main() {
    
    cout << "======= Use values of SIZES information " << endl;
    cout << "=========================================" << endl;
    
    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;
    
    cout << "=========================================" << endl;
    
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;
    
    
    cout << "======= Use values of MIN and MAX information" << endl;
    cout << "==========================================" << endl;
    
    cout << "Minimum values: " << endl; 
    
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN  << endl;
    cout << "short: " << INT_MIN << endl;
    cout << "unsigned int: " << INT_MIN << endl;
    cout << "long: " << INT_MIN << endl;
    cout << "long long: " <<  INT_MIN << endl;
    
    cout << "==========================================" << endl;
    
    
     cout << "Maximum values: " << endl; 
    
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX  << endl;
    cout << "short: " << INT_MAX << endl;
    cout << "unsigned int: " << INT_MAX << endl;
    cout << "long: " << INT_MAX << endl;
    cout << "long long: " <<  INT_MAX << endl;
    
     
    return 0;
}
