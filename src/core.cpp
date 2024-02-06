// Auto-generated module | 2026-05-11T22:25:26.828834
#include <iostream>
#include <vector>

int compute_313() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
