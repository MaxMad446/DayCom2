// Auto-generated module | 2026-05-11T22:08:17.151206
#include <iostream>
#include <vector>

int compute_880() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
