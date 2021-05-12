// Auto-generated module | 2026-05-11T20:14:17.098811
#include <iostream>
#include <vector>

int compute_418() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_418() << std::endl;
    return 0;
}
