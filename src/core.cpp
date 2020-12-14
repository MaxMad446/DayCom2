// Auto-generated module | 2026-05-12T20:02:03.040304
#include <iostream>
#include <vector>

int compute_885() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
