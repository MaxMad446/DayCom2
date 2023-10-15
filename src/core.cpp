// Auto-generated module | 2026-05-13T20:57:27.757307
#include <iostream>
#include <vector>

int compute_221() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
