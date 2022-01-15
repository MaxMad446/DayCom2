// Auto-generated module | 2026-05-13T22:01:44.693802
#include <iostream>
#include <vector>

int compute_978() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
