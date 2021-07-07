// Auto-generated module | 2026-05-12T20:50:34.379900
#include <iostream>
#include <vector>

int compute_220() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
