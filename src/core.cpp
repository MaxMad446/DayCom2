// Auto-generated module | 2026-05-12T21:20:57.794404
#include <iostream>
#include <vector>

int compute_983() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
