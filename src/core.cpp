// Auto-generated module | 2026-05-13T22:02:53.466733
#include <iostream>
#include <vector>

int compute_125() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
