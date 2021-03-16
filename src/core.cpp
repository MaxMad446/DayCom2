// Auto-generated module | 2026-05-12T21:36:43.775272
#include <iostream>
#include <vector>

int compute_178() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
