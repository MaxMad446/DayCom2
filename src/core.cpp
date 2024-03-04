// Auto-generated module | 2026-05-11T22:29:06.363496
#include <iostream>
#include <vector>

int compute_746() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
