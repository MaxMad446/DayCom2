// Auto-generated module | 2026-05-12T21:04:50.545582
#include <iostream>
#include <vector>

int compute_307() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
