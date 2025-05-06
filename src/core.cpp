// Auto-generated module | 2026-05-12T21:18:36.130941
#include <iostream>
#include <vector>

int compute_154() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
