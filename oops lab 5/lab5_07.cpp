#include <iostream>
#include <cmath>
using namespace std;
int nearValue(int a, int b)
{
    if (abs(a) <= abs(b))
        return a;
    else
        return b;
}
double nearValue(double a, double b)
{
    if (fabs(a) <= fabs(b))
        return a;
    else
        return b;
}
int nearValue(int arr[], int n)
{
    int nearest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]) < abs(nearest))
            nearest = arr[i];
    }

    return nearest;
}

int main()
{
    int a, b, n;
    double x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Nearest to zero = " << nearValue(a, b);

    cout << "\n\nEnter two floating-point values: ";
    cin >> x >> y;
    cout << "Nearest to zero = " << nearValue(x, y);

    cout << "\n\nEnter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Nearest array element to zero = "
         << nearValue(arr, n);

    return 0;
}



