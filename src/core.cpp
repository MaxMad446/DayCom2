// Auto-generated module | 2026-05-12T20:36:35.795776
#include <iostream>
#include <vector>

int compute_892() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
