
#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

float f(float x)
{
    return (x*x*x - 4*x - 9);
}

void bisect(float *x, float a, float b, int *itr)
{
    *x = (a + b) / 2;
    ++(*itr);
    cout << "Iteration no. " << setw(3) << *itr 
         << " x = " << setw(7) << setprecision(5)
         << *x << endl;
}

int main()
{
    int itr = 0, maxitr;
    float x, a, b, aerr, x1;
    cout << "Enter the values of a, b, "
         << "allowed error, maximum iterations" << endl;
    cin >> a >> b >> aerr >> maxitr;
    cout << fixed;
    bisect(&x, a, b, &itr);
    do
    {
        if (f(a) * f(x) < 0)
            b = x;
        else
            a = x;
        bisect(&x1, a, b, &itr);
        if (fabs(x1 - x) < aerr)
        {
            cout << "After " << itr << " iterations, root = "
                 << setw(6) << setprecision(4)
                 << x1 << endl;
            return 0;
        }
        x = x1;
    } while (itr < maxitr);
    cout << "Solution does not converge,"
         << "iterations not sufficient" << endl;
    return 1;

    /*
    12222349822
    */                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
}

