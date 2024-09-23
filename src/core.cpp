// Auto-generated module | 2026-05-12T03:39:50.751516
#include <iostream>
#include <vector>

int compute_168() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
