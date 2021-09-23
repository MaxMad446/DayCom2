// Auto-generated module | 2026-05-12T20:57:21.410682
#include <iostream>
#include <vector>

int compute_880() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
