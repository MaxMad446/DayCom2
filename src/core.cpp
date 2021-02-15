// Auto-generated module | 2026-05-12T20:38:51.430043
#include <iostream>
#include <vector>

int compute_154() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
