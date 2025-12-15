// Auto-generated module | 2026-05-12T04:39:03.249198
#include <iostream>
#include <vector>

int compute_253() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
