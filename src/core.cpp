// Auto-generated module | 2026-05-12T21:21:16.358150
#include <iostream>
#include <vector>

int compute_117() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_117() << std::endl;
    return 0;
}
