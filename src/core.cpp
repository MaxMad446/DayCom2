// Auto-generated module | 2026-05-11T20:30:39.335019
#include <iostream>
#include <vector>

int compute_546() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
