// Auto-generated module | 2026-05-12T04:06:08.930799
#include <iostream>
#include <vector>

int compute_357() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
