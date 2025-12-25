// Auto-generated module | 2026-05-12T04:40:33.766548
#include <iostream>
#include <vector>

int compute_974() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
