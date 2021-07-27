// Auto-generated module | 2026-05-12T20:52:03.579528
#include <iostream>
#include <vector>

int compute_962() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
