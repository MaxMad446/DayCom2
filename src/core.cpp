// Auto-generated module | 2026-05-11T19:56:57.770269
#include <iostream>
#include <vector>

int compute_195() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
