#include <iostream>  
#include <fstream>  
using namespace std;
#define LINES 3

int main () {
    ifstream infile_m("matrix.txt");
    float data_m[LINES][LINES];
    // cout << "data is " << data << endl;
    for (int i = 0; i<LINES; i++)
    {
        for (int j = 0; j<LINES; j++)
        {
            infile_m >> data_m[i][j];
        }
    }
    infile_m.close();
    cout << data_m[0][0] << "..." << data_m[0][2] << endl;
    cout << data_m[2][0] << "..." << data_m[2][2] << endl;
    cout << "finish matrix" << endl;

    ifstream infile_v("vector.txt");
    float data_v[LINES];
    // cout << "data is " << data << endl;
    for (int i = 0; i<LINES; i++)
    {
        infile_v >> data_v[i];
    }
    infile_v.close();
    cout << data_v[0] << "..." << data_v[2] << endl;
    cout << "finish vector" << endl;

    cout << "results:";
    ofstream outfile_r("mul_cpp.txt");
    float mul[LINES] = { 0 };
    for ( int i = 0; i < LINES; i++)
    {
        for ( int j = 0; j < LINES; j++)
        {
            mul[i] += data_m[i][j]*data_v[j];
        }
        cout << mul[i] << "\t" ;
        outfile_r << mul[i] << "\n"; // give results in outfile
    }
    cout << "finish calculate" << endl;

    return 0;  
}