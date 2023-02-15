// Auto-generated module | 2026-05-13T20:30:43.910269
#include <iostream>
#include <vector>

int compute_952() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
