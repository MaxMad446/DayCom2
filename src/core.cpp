// Auto-generated module | 2026-05-13T20:32:05.803959
#include <iostream>
#include <vector>

int compute_319() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
