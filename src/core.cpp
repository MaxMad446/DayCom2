// Auto-generated module | 2026-05-14T18:17:56.486650
#include <iostream>
#include <vector>

int compute_591() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
