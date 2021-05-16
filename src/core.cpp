// Auto-generated module | 2026-05-12T20:46:07.363332
#include <iostream>
#include <vector>

int compute_130() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_130() << std::endl;
    return 0;
}
