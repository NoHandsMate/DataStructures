//
// Created by lorenzo on 03/04/21.
//

#include "Queue.hpp"

struct Person {
    int age = 10;
    int sex = 1;

    friend std::ostream& operator<<(std::ostream& os, Person& pers) {
        os << pers.age << " " << pers.sex;
        return os;
    }



};

int main() {

    Queue<Person> queue;

    // deQueue is not possible on empty queue
    queue.Dequeue();

    //enQueue 5 elements
    queue.Enqueue(Person{1, 5});
    queue.Enqueue(Person{2, 6});
    queue.Enqueue(Person{40, 4});
    queue.Enqueue(Person{11, 33});
    queue.Enqueue(Person{33, 66});

   // queue.displayQueue();



    //deQueue removes element entered first i.e. 1, returning an optional object
    auto result = queue.Dequeue();

    std::cout << *result;



    return 0;
}