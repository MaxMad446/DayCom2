// Auto-generated module | 2026-05-11T20:27:08.350060
#include <iostream>
#include <vector>

int compute_908() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_908() << std::endl;
    return 0;
}
