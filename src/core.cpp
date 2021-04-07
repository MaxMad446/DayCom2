// Auto-generated module | 2026-05-12T21:38:37.741158
#include <iostream>
#include <vector>

int compute_814() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
