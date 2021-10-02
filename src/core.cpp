// Auto-generated module | 2026-05-12T20:58:07.101634
#include <iostream>
#include <vector>

int compute_898() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_898() << std::endl;
    return 0;
}
