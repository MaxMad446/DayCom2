// Auto-generated module | 2026-05-11T22:27:07.923121
#include <iostream>
#include <vector>

int compute_512() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
