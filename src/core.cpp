// Auto-generated module | 2026-05-11T22:04:08.672645
#include <iostream>
#include <vector>

int compute_396() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
