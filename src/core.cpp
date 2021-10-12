// Auto-generated module | 2026-05-12T20:58:56.393910
#include <iostream>
#include <vector>

int compute_943() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_943() << std::endl;
    return 0;
}
