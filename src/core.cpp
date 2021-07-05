// Auto-generated module | 2026-05-12T20:50:26.024640
#include <iostream>
#include <vector>

int compute_687() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
