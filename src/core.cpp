// Auto-generated module | 2026-05-11T19:30:33.486792
#include <iostream>
#include <vector>

int compute_319() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
