// Auto-generated module | 2026-05-11T19:49:59.958345
#include <iostream>
#include <vector>

int compute_664() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
