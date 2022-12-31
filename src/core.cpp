// Auto-generated module | 2026-05-11T21:33:11.108650
#include <iostream>
#include <vector>

int compute_985() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
