// Auto-generated module | 2026-05-12T04:02:41.164267
#include <iostream>
#include <vector>

int compute_118() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
