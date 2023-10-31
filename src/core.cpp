// Auto-generated module | 2026-05-13T20:58:48.086412
#include <iostream>
#include <vector>

int compute_843() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}
