#include "LinkedList.hpp"

int main() {
    LinkedList<int> list;

    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);
    list.append(50);

    list.print(); // [10, 20, 30, 40, 50]

    list.remove(0);     // [20, 30, 40, 50]
    list.insert(80, 3); // [20, 30, 40, 80, 50]
    list.prepend(10);   // [10, 20, 30, 40, 80, 50]
    list.remove(4);     // [10, 20, 30, 40, 50]
    list.insert(60, 5); // [10, 20, 30, 40, 50, 60]

    list.print(); // [10, 20, 30, 40, 50, 60]

    return 0;
}
