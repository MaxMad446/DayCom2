// Auto-generated module | 2026-05-11T20:42:56.714382
#include <iostream>
#include <vector>

int compute_236() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
