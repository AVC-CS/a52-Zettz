#include <iostream>
using namespace std;

int main()
{
    int num, max_val;
    cin >> num; // Read the first number
    max_val = num; // Initialize max_val with the first number

    for(int i=1;i<10;i++){ // Loop for the remaining 9 numbers
      cin >> num;
      if ( num > max_val )
        max_val = num;
    }

    cout << " Max " << max_val << endl;
    return 0;
}