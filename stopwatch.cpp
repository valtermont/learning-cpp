#include <iostream>
#include <time.h> 

class Stopwatch {
    time_t begin, end;
    time_t start_t;
    bool isStarted {false};
public:
    Stopwatch();
    ~Stopwatch();
    void start();
    void stop();
    void show();    
};

Stopwatch::Stopwatch() {
    time(&begin);
    std::cout << "Start execution..." << std::endl; 
}

Stopwatch::~Stopwatch() {
    time(&end);
    std::cout << "Time of execution: " << difftime(end, begin) << " seconds;" << std::endl; 
}

void Stopwatch::show() {
    if (isStarted) {
        time_t current_t;
        time(&current_t);

        std::cout << "Current timer: " << difftime(current_t, start_t) << " seconds;" << std::endl;

        return;
    }

    std::cout << "Timer not started" << std::endl;
}

void Stopwatch::start() {
    if (isStarted) {
        std::cout << "Timer already started" << std::endl;

        return;
    }

    time(&start_t);
    isStarted = true;
}

void Stopwatch::stop() {
    if (isStarted) {
        time_t current_t;
        time(&current_t);

        std::cout << "Timer finished: " << difftime(current_t, start_t) << " seconds;" << std::endl;

        isStarted = false;

        return;
    }

    std::cout << "Timer not started" << std::endl;
}

int main() {
    Stopwatch sw;
    sw.start();
    sw.show();
    sw.stop();
}