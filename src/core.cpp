// Auto-generated module | 2026-05-12T20:42:58.715342
#include <iostream>
#include <vector>

int compute_943() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_943() << std::endl;
    return 0;
}
