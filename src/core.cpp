// Auto-generated module | 2026-05-12T20:51:08.116878
#include <iostream>
#include <vector>

int compute_842() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
