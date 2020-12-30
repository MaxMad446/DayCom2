// Auto-generated module | 2026-05-12T20:03:30.746264
#include <iostream>
#include <vector>

int compute_723() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
