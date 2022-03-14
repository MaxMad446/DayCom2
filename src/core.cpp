// Auto-generated module | 2026-05-13T22:06:29.468953
#include <iostream>
#include <vector>

int compute_952() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
