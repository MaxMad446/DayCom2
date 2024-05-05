// Auto-generated module | 2026-05-11T22:37:08.732216
#include <iostream>
#include <vector>

int compute_408() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}
