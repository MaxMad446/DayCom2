// Auto-generated module | 2026-05-11T21:40:43.944390
#include <iostream>
#include <vector>

int compute_864() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
