// Auto-generated module | 2026-05-14T06:27:48.611438
#include <iostream>
#include <vector>

int compute_746() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
