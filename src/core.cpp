// Auto-generated module | 2026-05-12T21:21:13.155273
#include <iostream>
#include <vector>

int compute_699() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
