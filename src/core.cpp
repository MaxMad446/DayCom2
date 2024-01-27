// Auto-generated module | 2026-05-14T18:19:20.900583
#include <iostream>
#include <vector>

int compute_962() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
