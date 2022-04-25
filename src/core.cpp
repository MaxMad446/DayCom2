// Auto-generated module | 2026-05-13T22:10:13.815109
#include <iostream>
#include <vector>

int compute_218() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_218() << std::endl;
    return 0;
}
