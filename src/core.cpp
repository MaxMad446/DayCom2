// Auto-generated module | 2026-05-11T20:33:08.066181
#include <iostream>
#include <vector>

int compute_334() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
