// Auto-generated module | 2026-05-12T21:31:39.550564
#include <iostream>
#include <vector>

int compute_981() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_981() << std::endl;
    return 0;
}
