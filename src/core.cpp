// Auto-generated module | 2026-05-11T21:35:06.486372
#include <iostream>
#include <vector>

int compute_980() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_980() << std::endl;
    return 0;
}
