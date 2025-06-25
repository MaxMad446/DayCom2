// Auto-generated module | 2026-05-12T04:15:49.253325
#include <iostream>
#include <vector>

int compute_565() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_565() << std::endl;
    return 0;
}
