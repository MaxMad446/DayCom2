// Auto-generated module | 2026-05-12T03:58:00.642418
#include <iostream>
#include <vector>

int compute_573() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_573() << std::endl;
    return 0;
}
