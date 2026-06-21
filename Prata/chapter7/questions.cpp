#include<iostream>

void igor();
float tofu(int);
double mpg(double, double);
long summation(long*, int);
double doctor(const char*);

struct boss{};
void ofcourse(boss);

struct map{};
char* plot(map*);

void assign(int ar[], int arSize, int a);
void assign2(int* begin, int* end, int a);

double max(const double* ar, int size);
int replace(char* str, char c1, char c2);
int judge(int (*fn)(const char));

struct applicant
{
    char name[30];
    int creadit_ratings[3];
};

void print(int ar[], int arSize);
void print(applicant a);
void print(const applicant* a);

void f1(applicant* a);
const char* f2(const applicant* a1, const applicant* a2);

typedef void(*f1_ptr)(applicant* a);
typedef const char*(*f2_ptr)(const applicant* a1, const applicant* a2);

int main()
{
    int a[4] {0};
    print(a, 4);

    assign(a, 4, 10);
    print(a, 4);

    assign2(a, a+4, 20);
    print(a, 4);

    double b[5] {1.33, 2.45, 5.34, -4.34, 3.67};
    std::cout << max(b, 5) << '\n';

    char str[] = "Hello World";
    std::cout << str << ", found " << replace(str, 'l', 'o') << " 'l' replaced to 'o', new string: " << str << '\n';

    applicant Johnny {"John Dow", {5, 3, 4}};
    print(Johnny);
    print(&Johnny);

    f2_ptr p1 = f2;
    f1_ptr p2 = f1;
}

void assign(int ar[], int arSize, int a)
{
    for (int i{0}; i < arSize; ++i)
        ar[i] = a;
}

void assign2(int* begin, int* end, int a)
{
    int* pt;
    for (pt = begin; pt != end; pt++)
        *pt = a;
}

double max(const double* ar, int size)
{
    if (size == 0) {
        std::cout << "Error\n";
        return 0.0;
    }

    double maxValue {ar[0]};
    for (int i{1}; i < size; ++i)
        if (ar[i] > maxValue)
            maxValue = ar[i];
    
    return maxValue;
}

void print(int ar[], int arSize)
{
    std::cout << "{";
    for (int i{0}; i < arSize; ++i)
    {
        std::cout << ar[i];
        if (i < arSize - 1)
            std::cout << ", ";
    }
    std::cout << "}\n";
}

int replace(char* str, char c1, char c2)
{
    int count{0};
    while (*str)
    {
        if (*str == c1)
        {
            *str = c2;
            ++count;
        }
        str++;
    }
    return count;
}

void print(applicant a)
{
    std::cout << "Applicant " << a.name << '\n';
    std::cout << " Rating: "
        << a.creadit_ratings[0] << ", "
        << a.creadit_ratings[1] << ", "
        << a.creadit_ratings[2] << "\n";
}

void print(const applicant* a)
{
    std::cout << "Applicant " << a->name << '\n';
    std::cout << " Rating: "
        << a->creadit_ratings[0] << ", "
        << a->creadit_ratings[1] << ", "
        << a->creadit_ratings[2] << "\n";    
}

void f1(applicant* a)
{
    std::cout << a->name;
}

const char* f2(const applicant* a1, const applicant* a2)
{
    return a1->name;
}