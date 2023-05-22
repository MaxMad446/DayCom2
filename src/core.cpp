// Auto-generated module | 2026-05-13T20:38:41.314428
#include <iostream>
#include <vector>

int compute_952() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
