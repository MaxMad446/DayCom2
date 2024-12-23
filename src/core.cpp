// Auto-generated module | 2026-05-12T03:51:45.136732
#include <iostream>
#include <vector>

int compute_504() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_504() << std::endl;
    return 0;
}
