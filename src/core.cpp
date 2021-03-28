// Auto-generated module | 2026-05-12T21:37:41.602981
#include <iostream>
#include <vector>

int compute_936() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
