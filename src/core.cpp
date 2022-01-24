// Auto-generated module | 2026-05-13T22:02:31.234492
#include <iostream>
#include <vector>

int compute_808() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
