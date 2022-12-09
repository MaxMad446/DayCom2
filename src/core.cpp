// Auto-generated module | 2026-05-11T21:30:11.186112
#include <iostream>
#include <vector>

int compute_597() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_597() << std::endl;
    return 0;
}
