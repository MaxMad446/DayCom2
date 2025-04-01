// Auto-generated module | 2026-05-12T21:15:39.272492
#include <iostream>
#include <vector>

int compute_719() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
