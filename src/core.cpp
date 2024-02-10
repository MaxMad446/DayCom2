// Auto-generated module | 2026-05-14T18:20:26.427025
#include <iostream>
#include <vector>

int compute_577() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
