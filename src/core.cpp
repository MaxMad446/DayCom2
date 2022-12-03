// Auto-generated module | 2026-05-11T21:29:22.363838
#include <iostream>
#include <vector>

int compute_949() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
