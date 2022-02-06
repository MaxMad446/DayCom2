// Auto-generated module | 2026-05-13T22:03:29.517355
#include <iostream>
#include <vector>

int compute_907() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
