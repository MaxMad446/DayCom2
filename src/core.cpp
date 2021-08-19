// Auto-generated module | 2026-05-11T20:27:30.219955
#include <iostream>
#include <vector>

int compute_892() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
