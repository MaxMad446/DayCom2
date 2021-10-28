// Auto-generated module | 2026-05-11T20:36:35.693655
#include <iostream>
#include <vector>

int compute_958() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
