// Auto-generated module | 2026-05-13T22:01:24.584832
#include <iostream>
#include <vector>

int compute_952() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
