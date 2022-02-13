// Auto-generated module | 2026-05-13T22:04:06.885174
#include <iostream>
#include <vector>

int compute_942() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
