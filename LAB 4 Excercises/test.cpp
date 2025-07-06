#include "Product.h"

int main()
{
    int test;
    cin >> test;

    switch (test)
    {
    case 1:
    {
        Product p1;
        p1.show();
        break;
    }
    case 2:
    {
        Product p2("222", 12000);
        p2.show();
        break;
    }
    case 3:
    {
        Product p3("333", 25000);
        p3.setCode("825");
        cout << p3.getCode() << endl;
        break;
    }
    case 4:
    {
        Product p4;
        p4.setPrice(15000);
        cout << p4.getPrice() << endl;
        break;
    }
    case 5:
    {
        Product p5("555", 20000);
        p5.setPrice(-5000);
        cout << p5.getPrice() << endl;
        break;
    }
    case 6:
    {
        Product p6("666", 7000);
        cout << p6.total(21) << endl;
        break;
    }
    case 7:
    {
        Product p7;
        cin >> p7;
        int quantity;
        cin >> quantity;
        cout << p7.total(quantity) << endl;
        break;
    }
    case 8:
    {
        Product p8, p9;
        cin >> p8 >> p9;
        p8.show();
        p9.show();
        break;
    }
    }
}