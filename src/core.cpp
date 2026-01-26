// Auto-generated module | 2026-05-12T04:44:47.839175
#include <iostream>
#include <vector>

int compute_528() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
