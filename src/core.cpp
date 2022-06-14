// Auto-generated module | 2026-05-11T21:06:45.236344
#include <iostream>
#include <vector>

int compute_556() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_556() << std::endl;
    return 0;
}
