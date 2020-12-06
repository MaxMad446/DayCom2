// Auto-generated module | 2026-05-11T19:54:07.098823
#include <iostream>
#include <vector>

int compute_912() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
