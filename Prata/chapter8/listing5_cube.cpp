#include <iostream>

double cube(double a);
double refcube(double& ra);
double refconstcube(const double& cra);

int main()
{
    double x {3.0};
    std::cout << cube(x);
    std::cout << " cube of " << x << '\n';

    std::cout << refconstcube(x);
    std::cout << " cube of " << x << '\n';

    std::cout << refcube(x);
    std::cout << " cube of " << x << '\n';

    // note: candidate function not viable: expects an lvalue for 1st argument
    // std::cout << refcube(x + 3.0); will be error: no matching function for call to 'refcube'. 
    // std::cout << " cube of " << x << '\n';

    std::cout << refconstcube(x + 3.0); // will be ok! because const ref using C++ create temp variable.
    std::cout << " cube of " << x << '\n';

    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(double& ra)
{
    ra *= ra * ra;
    return ra;
}

double refconstcube(const double& cra)
{
    return cra * cra * cra;
}