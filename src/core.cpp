// Auto-generated module | 2026-05-12T20:01:29.311500
#include <iostream>
#include <vector>

int compute_148() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
