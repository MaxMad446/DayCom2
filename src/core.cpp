// Auto-generated module | 2026-05-14T18:20:22.618598
#include <iostream>
#include <vector>

int compute_595() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
