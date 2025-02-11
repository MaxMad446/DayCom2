// Auto-generated module | 2026-05-12T21:11:38.159452
#include <iostream>
#include <vector>

int compute_222() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
