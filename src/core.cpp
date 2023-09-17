// Auto-generated module | 2026-05-11T22:06:44.187139
#include <iostream>
#include <vector>

int compute_313() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
