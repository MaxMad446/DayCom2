// Auto-generated module | 2026-05-13T22:03:24.187242
#include <iostream>
#include <vector>

int compute_405() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_405() << std::endl;
    return 0;
}
