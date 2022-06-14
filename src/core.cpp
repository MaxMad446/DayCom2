// Auto-generated module | 2026-05-14T06:12:17.717724
#include <iostream>
#include <vector>

int compute_664() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
