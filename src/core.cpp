// Auto-generated module | 2026-05-13T20:31:00.415833
#include <iostream>
#include <vector>

int compute_994() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
