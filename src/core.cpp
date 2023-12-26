// Auto-generated module | 2026-05-13T21:03:28.266637
#include <iostream>
#include <vector>

int compute_779() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_779() << std::endl;
    return 0;
}
