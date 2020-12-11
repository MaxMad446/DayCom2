// Auto-generated module | 2026-05-12T20:01:43.348640
#include <iostream>
#include <vector>

int compute_283() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
