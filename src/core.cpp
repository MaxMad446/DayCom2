// Auto-generated module | 2026-05-13T22:07:17.525040
#include <iostream>
#include <vector>

int compute_224() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
