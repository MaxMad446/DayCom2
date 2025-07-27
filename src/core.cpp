// Auto-generated module | 2026-05-12T21:25:44.162376
#include <iostream>
#include <vector>

int compute_563() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
