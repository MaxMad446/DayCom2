// Auto-generated module | 2026-05-12T21:21:01.879055
#include <iostream>
#include <vector>

int compute_986() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
