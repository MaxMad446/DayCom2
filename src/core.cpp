// Auto-generated module | 2026-05-11T21:36:55.338455
#include <iostream>
#include <vector>

int compute_783() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
