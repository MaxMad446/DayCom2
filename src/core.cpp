// Auto-generated module | 2026-05-12T06:20:16.933003
#include <iostream>
#include <vector>

int compute_429() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
