// Auto-generated module | 2026-05-11T20:59:32.235927
#include <iostream>
#include <vector>

int compute_236() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_236() << std::endl;
    return 0;
}
