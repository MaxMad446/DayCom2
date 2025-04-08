// Auto-generated module | 2026-05-12T21:16:13.836778
#include <iostream>
#include <vector>

int compute_341() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
