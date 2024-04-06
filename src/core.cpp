// Auto-generated module | 2026-05-14T18:24:49.024133
#include <iostream>
#include <vector>

int compute_958() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
