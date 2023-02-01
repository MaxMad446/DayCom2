// Auto-generated module | 2026-05-13T20:29:31.376052
#include <iostream>
#include <vector>

int compute_952() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
