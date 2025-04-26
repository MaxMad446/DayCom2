// Auto-generated module | 2026-05-12T21:17:45.755679
#include <iostream>
#include <vector>

int compute_691() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
