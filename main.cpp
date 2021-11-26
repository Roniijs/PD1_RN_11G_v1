//Darbu veica Ronalds Nikolajevs
#include <iostream>
#include <vector>

using namespace std;

int main()
{



    int row;
    cout << "Ievadiet pirmo skaitli : " << endl;
    cin >> row;

    int col;
    cout << "Ievadiet otro skaitli : " << endl;
    cin >> col;

    int num;
    cout << "Ievadiet treso skaitli " << endl;
    cin >> num;

    vector<vector<int>> values(col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            values[i].push_back(num);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << values[i][j];
        }
cout << endl;
    }


    return 0;
}
