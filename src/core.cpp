// Auto-generated module | 2026-05-13T20:49:34.722445
#include <iostream>
#include <vector>

int compute_607() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_607() << std::endl;
    return 0;
}
