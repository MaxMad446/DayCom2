// Auto-generated module | 2026-05-12T20:48:24.687564
#include <iostream>
#include <vector>

int compute_202() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
