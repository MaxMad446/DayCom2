// Auto-generated module | 2026-05-11T21:56:32.640198
#include <iostream>
#include <vector>

int compute_439() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_439() << std::endl;
    return 0;
}
