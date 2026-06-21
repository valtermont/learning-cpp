#include <iostream>

const double *f1(const double ar[], int n);
const double *f2(const double[], int);
const double *f3(const double*, int);

int main()
{
    double av[3] {1112.3, 1542.6, 2227.9};

    const double *(*p1)(const double*, int) = f1;
    auto p2 = f2;

    std::cout << "Using pointers to functions:\n";
    std::cout << " Address value:\n";
    std::cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << '\n';
    std::cout << p2(av, 3) << ": " << *p2(av, 3) << '\n';

    const double *(*pa[3])(const double*, int n) = {f1, f2, f3};
    auto pb = pa;
    std::cout << "\nUsing an array of pointers to functions:\n";
    std::cout << " Address value\n";
    for (int i{0}; i < 3; i++)
        std::cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << '\n';

    std::cout << "\nUsing a pointer to pointer to a function:\n";
    std::cout << " Address value\n";
    for (int i{0}; i < 3; i++)
        std::cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << '\n';

    auto pc = &pa;
    std::cout << "\nUsing pointers to an array of pointers:\n";
    std::cout << " Address value\n";
    std::cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << '\n';

    const double *(*(*pd)[3])(const double*, int n) = &pa;
    const double* pdb = (*pd)[1](av, 3);
    std::cout << pdb << ": " << *pdb << '\n';
    std::cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << '\n';

    return 0;
}

const double *f1(const double ar[], int n)
{
    return ar;
}

const double *f2(const double ar[], int n)
{
    return ar + 1;
}

const double *f3(const double* ar, int n)
{
    return ar + 2;
}