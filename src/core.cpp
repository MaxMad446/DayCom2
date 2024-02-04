// Auto-generated module | 2026-05-11T22:25:08.709136
#include <iostream>
#include <vector>

int compute_246() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
