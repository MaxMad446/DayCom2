// Auto-generated module | 2026-05-12T04:21:45.429769
#include <iostream>
#include <vector>

int compute_148() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
