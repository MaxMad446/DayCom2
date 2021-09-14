// Auto-generated module | 2026-05-12T20:56:32.759844
#include <iostream>
#include <vector>

int compute_874() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
