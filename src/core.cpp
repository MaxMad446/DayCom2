// Auto-generated module | 2026-05-12T20:53:47.581539
#include <iostream>
#include <vector>

int compute_245() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
