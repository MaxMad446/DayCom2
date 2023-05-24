// Auto-generated module | 2026-05-11T21:51:46.957216
#include <iostream>
#include <vector>

int compute_164() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
