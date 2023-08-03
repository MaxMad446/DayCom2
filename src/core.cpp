// Auto-generated module | 2026-05-13T20:51:24.202177
#include <iostream>
#include <vector>

int compute_358() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
