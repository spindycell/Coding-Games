// https://www.codingame.com/training/easy/temperatures
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n,hasil=6000,jarak=0,result=0; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        if(abs(t)<hasil){
            hasil = abs(t);
            result = t;
        } else if(abs(t)==hasil){
            if(t<result){
                result = abs(t);
            } else {
                result = t;
            }
        }
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << result << endl;
}
