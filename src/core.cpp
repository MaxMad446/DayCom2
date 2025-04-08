// Auto-generated module | 2026-05-12T04:05:35.016037
#include <iostream>
#include <vector>

int compute_153() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}
