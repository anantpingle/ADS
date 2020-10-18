#include <iostream>

using namespace std;

int main()
{
    int array1[2][2];
   // cout << "Enter value for n" <<endl;
    //cin >>n ;

    cout << "Enter Array elements : " << endl;

    for(int a = 0; a < 2; a++)
    {
        for(int b = 0; b < 2; b++)
        {
            cin >> array1[a][b];
        }
    }
     cout << "ARRAY" << endl;
      for(int a = 0; a < 2; a++)
    {
        for(int b = 0; b < 2; b++)
        {
            cout << array1[a][b]<<"\t";
        }
        cout<<endl;
    }

    int array2[2][2];
   // cout << "Enter value for n" <<endl;
    //cin >>n ;

    cout << "Enter Array elements : " << endl;

    for(int a = 0; a < 2; a++)
    {
        for(int b = 0; b < 2; b++)
        {
            cin >> array2[a][b];
        }
    }
     cout << "ARRAY" << endl;
      for(int a = 0; a < 2; a++)
    {
        for(int b = 0; b < 2; b++)
        {
            cout << array2[a][b]<<"\t";
        }
        cout<<endl;
    }

    int array3[2][2];

     cout << "ARRAY SUM" << endl;
      for(int a = 0; a < 2; a++)
    {
        for(int b = 0; b < 2; b++)
        {
            array3[a][b] = array1[a][b] + array2[a][b];
            cout << array3[a][b]<<"\t";
        }
        cout<<endl;
    }
     int array4[2][2];

     cout << "ARRAY SUB" << endl;
      for(int a = 0; a < 2; a++)
    {
        for(int b = 0; b < 2; b++)
        {
            array4[a][b] = array1[a][b] - array2[a][b];
            cout << array4[a][b]<<"\t";
        }
        cout<<endl;
    }
     int array5[2][2];

     cout << "ARRAY MULT" << endl;
      for(int a = 0; a < 2; a++)
    {
        for(int b = 0; b < 2; b++)
        {
            array5[a][b] = array1[a] * array2[a][b];
            array5[a][b] = array1[b] * array2[a][b];
            cout << array5[a][b]<<"\t";
        }
        cout<<endl;
    }*/



    return 0;
}
