// Auto-generated module | 2026-05-12T20:56:54.467833
#include <iostream>
#include <vector>

int compute_680() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}
