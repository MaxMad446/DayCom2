// Auto-generated module | 2026-05-14T18:13:28.596101
#include <iostream>
#include <vector>

int compute_164() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
