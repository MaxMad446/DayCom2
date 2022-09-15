// Auto-generated module | 2026-05-11T21:19:07.408359
#include <iostream>
#include <vector>

int compute_689() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
