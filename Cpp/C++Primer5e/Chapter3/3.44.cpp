#include <iostream>
using std::cout; using std::endl;

#include <iterator>
using std::begin; using std::end;

typedef int int_def[9];
using int_array = int[9];

int main(int argc, char** argv)
{
    int ia[9][9];

    {
        int rows=0, cols=0;

        for(int (&r)[9] : ia){
            ++ rows;
            for(int &c : r){
                ++ cols;
                c = rows * 10 + cols;
            }
            cols = 0;
        }
    }

    cout << "v1-1" << endl;
    
    for(int_def &r : ia){
        for(int c : r){
            cout << c << '\t';
        }
        cout << endl;
    }

    cout << "v1-2" << endl;
    for(int_array &r : ia){
        for(int c : r){
            cout << c << '\t';
        }
        cout << endl;
    }

    cout << "v2" << endl;
    
    for(int rows = 0; rows < 9; ++rows){
        for(int cols = 0; cols < 9; ++cols){
            cout << ia[rows][cols] << '\t';
        }
        cout << endl;
    }

    cout << "v3" << endl;
    
    for(int_array *cols = ia; cols < ia + 9; ++cols){
        for(int *rows = *cols; rows < *cols + 9; ++rows){
            cout << *rows << '\t';
        }
        cout << endl;
    }

    return 0;
}