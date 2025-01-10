// Auto-generated module | 2026-05-12T21:08:44.637735
#include <iostream>
#include <vector>

int compute_527() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_527() << std::endl;
    return 0;
}
