// Auto-generated module | 2026-05-12T03:56:32.101279
#include <iostream>
#include <vector>

int compute_629() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
