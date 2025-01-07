// Auto-generated module | 2026-05-12T21:08:26.469036
#include <iostream>
#include <vector>

int compute_199() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
