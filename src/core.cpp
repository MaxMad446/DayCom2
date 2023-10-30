// Auto-generated module | 2026-05-11T22:12:32.771559
#include <iostream>
#include <vector>

int compute_195() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
