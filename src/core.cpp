// Auto-generated module | 2026-05-12T04:02:16.704219
#include <iostream>
#include <vector>

int compute_872() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
