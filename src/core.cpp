// Auto-generated module | 2026-05-12T20:02:53.372757
#include <iostream>
#include <vector>

int compute_782() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}
