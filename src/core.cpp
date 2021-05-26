// Auto-generated module | 2026-05-11T20:16:12.885294
#include <iostream>
#include <vector>

int compute_481() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_481() << std::endl;
    return 0;
}
