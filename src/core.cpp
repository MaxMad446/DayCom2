// Auto-generated module | 2026-05-14T18:04:49.058623
#include <iostream>
#include <vector>

int compute_715() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}
