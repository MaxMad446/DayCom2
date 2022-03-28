// Auto-generated module | 2026-05-13T22:07:44.313761
#include <iostream>
#include <vector>

int compute_283() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
