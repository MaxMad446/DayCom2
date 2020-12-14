// Auto-generated module | 2026-05-14T18:10:07.675008
#include <iostream>
#include <vector>

int compute_381() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
