#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> g1; 

    for( int i = 1; i <= 5; i++ )
        g1.push_back(i);

    cout << "Output of begin and end: \n";
    for( auto i = g1.begin(); i != g1.end(); ++i )
        cout << *i << "\n ";

    cout << "Output of begin and end: \n";
    for( auto i = g1.cbegin(); i != g1.cend(); ++i )
        cout << *i << "\n ";
 
    cout << "Output of begin and end: \n";
    for( auto i = g1.rbegin(); i != g1.rend(); ++i )
        cout << *i << "\n ";

    cout << "Output of begin and end: \n";
    for( auto i = g1.crbegin(); i!= g1.crend(); ++i )
        cout << *i << "\n ";

    return 0;
}