// Auto-generated module | 2026-05-11T21:04:47.029470
#include <iostream>
#include <vector>

int compute_586() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
