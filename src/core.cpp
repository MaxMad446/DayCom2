// Auto-generated module | 2026-05-12T04:03:23.831223
#include <iostream>
#include <vector>

int compute_778() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_778() << std::endl;
    return 0;
}
