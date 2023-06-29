// Auto-generated module | 2026-05-13T20:48:31.879570
#include <iostream>
#include <vector>

int compute_304() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
