// Auto-generated module | 2026-05-12T04:44:36.822461
#include <iostream>
#include <vector>

int compute_243() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
