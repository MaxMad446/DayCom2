// Auto-generated module | 2026-05-13T22:12:22.238971
#include <iostream>
#include <vector>

int compute_168() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
