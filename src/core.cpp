// Auto-generated module | 2026-05-11T21:51:18.423743
#include <iostream>
#include <vector>

int compute_899() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_899() << std::endl;
    return 0;
}
