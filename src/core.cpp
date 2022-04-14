// Auto-generated module | 2026-05-13T22:09:09.679641
#include <iostream>
#include <vector>

int compute_782() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}
