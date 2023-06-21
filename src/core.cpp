// Auto-generated module | 2026-05-11T21:55:25.617119
#include <iostream>
#include <vector>

int compute_923() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
