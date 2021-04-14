// Auto-generated module | 2026-05-12T20:43:24.669184
#include <iostream>
#include <vector>

int compute_122() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
