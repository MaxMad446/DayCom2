// Auto-generated module | 2026-05-12T04:33:11.692312
#include <iostream>
#include <vector>

int compute_425() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
