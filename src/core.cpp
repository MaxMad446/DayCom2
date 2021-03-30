// Auto-generated module | 2026-05-12T20:42:16.163616
#include <iostream>
#include <vector>

int compute_346() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
