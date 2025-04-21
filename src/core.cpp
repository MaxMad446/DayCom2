// Auto-generated module | 2026-05-12T21:17:22.763584
#include <iostream>
#include <vector>

int compute_794() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
