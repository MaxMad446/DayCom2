// Auto-generated module | 2026-05-13T21:02:44.262625
#include <iostream>
#include <vector>

int compute_578() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_578() << std::endl;
    return 0;
}
