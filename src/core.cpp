// Auto-generated module | 2026-05-13T22:02:19.409532
#include <iostream>
#include <vector>

int compute_948() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_948() << std::endl;
    return 0;
}
