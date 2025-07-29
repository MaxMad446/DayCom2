// Auto-generated module | 2026-05-12T04:20:22.806110
#include <iostream>
#include <vector>

int compute_330() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
