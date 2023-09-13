// Auto-generated module | 2026-05-13T20:54:46.899213
#include <iostream>
#include <vector>

int compute_869() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_869() << std::endl;
    return 0;
}
