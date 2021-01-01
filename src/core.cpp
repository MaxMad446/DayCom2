// Auto-generated module | 2026-05-12T21:30:48.148980
#include <iostream>
#include <vector>

int compute_694() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
