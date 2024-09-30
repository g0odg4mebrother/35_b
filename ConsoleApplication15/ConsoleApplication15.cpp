
#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");

    int x;
    int z;
    int y;

    cout << "введите число x\n";
    cin >> x;
    cout << "введите число z\n"; 
    cin >> z;
    cout << "введите число y\n";
    cin >> y;

    cout << "otvet" << max (x + y + z/2, x * y * z)+1;







}
