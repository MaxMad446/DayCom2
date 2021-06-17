// Auto-generated module | 2026-05-11T20:19:03.536309
#include <iostream>
#include <vector>

int compute_687() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
