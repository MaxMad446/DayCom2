// Auto-generated module | 2026-05-11T22:34:04.165187
#include <iostream>
#include <vector>

int compute_446() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_446() << std::endl;
    return 0;
}
