// Auto-generated module | 2026-05-12T04:17:11.616571
#include <iostream>
#include <vector>

int compute_420() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_420() << std::endl;
    return 0;
}
