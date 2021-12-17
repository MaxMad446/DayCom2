// Auto-generated module | 2026-05-12T21:04:27.881281
#include <iostream>
#include <vector>

int compute_871() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
