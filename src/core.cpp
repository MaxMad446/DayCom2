// Auto-generated module | 2026-05-12T20:38:46.987865
#include <iostream>
#include <vector>

int compute_897() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_897() << std::endl;
    return 0;
}
