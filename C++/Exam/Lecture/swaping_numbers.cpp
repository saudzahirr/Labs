//Swaping of numbers.

#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t;
    t = *a;
    *a = *b;
    b = &t;
    cout << *a << endl << * b;
}
int main() {
    int a, b;
    cin >> a >> b;
    swap(&a, &b);
    return 0;
}
