// Auto-generated module | 2026-05-11T21:16:59.365945
#include <iostream>
#include <vector>

int compute_515() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
