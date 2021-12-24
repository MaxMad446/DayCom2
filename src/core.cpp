// Auto-generated module | 2026-05-11T20:44:14.546168
#include <iostream>
#include <vector>

int compute_465() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
