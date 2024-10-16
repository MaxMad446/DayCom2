// Auto-generated module | 2026-05-12T03:42:48.227301
#include <iostream>
#include <vector>

int compute_115() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
