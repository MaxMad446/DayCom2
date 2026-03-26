// Auto-generated module | 2026-05-12T06:16:38.813789
#include <iostream>
#include <vector>

int compute_311() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
