#include "Fraction.h" 
#include <fstream>
#include <string>
#include<vector>
int main()
{
    string filename;
    cin >> filename;                //input "filename.txt"
    ifstream file(filename);

    
    if (!file)
    {
        cout << "Khong mo duoc file tren." << endl;
        return 1;
    }
   
    //doc n so phan tu
    int n;
    file>> n;
    
    //doc phan so
    vector<Fraction> fractions;
    for (int i = 0; i < n; i++)
    {
        int num;
        int den;
        if (!(file >> num >> den)) {
            cout << "loi doc file tai dong " << (i + 2) << endl;
            break;
        }
        fractions.push_back(Fraction(num, den));
    }
    
    if (fractions.empty())
    {
        cout << "Khong co phan so" << endl;
        return 0;
    }
    Fraction min = fractions[0];
    Fraction max = fractions[0];

    // khong doc lai tu file
    for (int i = 1; i < fractions.size(); i++)
    {
        if (fractions[i] < min) min = fractions[i];
        
        if (fractions[i] > max) max = fractions[i];
    }
    
    cout << "Phan so nho nhat: ";
    cout << min;
    cout << endl;

    cout << "Phan so lon nhat: ";
    cout << max;
    cout << endl;
    
    return 0;
}