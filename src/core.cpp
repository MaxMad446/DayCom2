// Auto-generated module | 2026-05-11T20:00:03.100728
#include <iostream>
#include <vector>

int compute_687() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
