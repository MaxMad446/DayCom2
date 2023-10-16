// Auto-generated module | 2026-05-13T20:57:34.415521
#include <iostream>
#include <vector>

int compute_876() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_876() << std::endl;
    return 0;
}
