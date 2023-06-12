// Auto-generated module | 2026-05-13T20:47:18.053631
#include <iostream>
#include <vector>

int compute_323() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_323() << std::endl;
    return 0;
}
