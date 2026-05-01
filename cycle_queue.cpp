#include <iostream>

const int MAX_SIZE = 5;

class CircularQueue { 
    int data[MAX_SIZE];
    int cursor = 0; // Указывает на голову (первый элемент)
    int size = 0;     // Текущий размер
public:
    void enqueue(int val);
    int dequeue();
};

void CircularQueue::enqueue(int val) {
    if (size == MAX_SIZE) {
        std::cout << "ERROR: Queue is full!" << std::endl;

        return;
    }

    data[(cursor + size) % MAX_SIZE] = val;
    size++;
}

int CircularQueue::dequeue() {
    if (size == 0) {
        std::cout << "ERROR: Queue is empty!" << std::endl;

        return -1;
    }

    int val = data[cursor];
    cursor = (cursor + 1) % MAX_SIZE;
    size--;
    return val;
}

int main() {
    CircularQueue queue;
    queue.dequeue(); // ERROR: Queue is empty!
    queue.enqueue(23);
    queue.enqueue(100);
    queue.enqueue(34);
    queue.enqueue(-24);
    queue.enqueue(54);

    queue.enqueue(34); // ERROR: Queue is full!

    std::cout << queue.dequeue() << std::endl;
    std::cout << queue.dequeue() << std::endl;
    std::cout << queue.dequeue() << std::endl;

    queue.enqueue(25);
    queue.enqueue(30);
    // queue.enqueue(1);
    // queue.enqueue(2);

    std::cout << queue.dequeue() << std::endl;
    std::cout << queue.dequeue() << std::endl;
    std::cout << queue.dequeue() << std::endl;
    std::cout << queue.dequeue() << std::endl;
}