// Auto-generated module | 2026-05-11T20:58:06.343861
#include <iostream>
#include <vector>

int compute_290() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
