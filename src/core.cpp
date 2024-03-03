// Auto-generated module | 2026-05-14T18:22:15.643997
#include <iostream>
#include <vector>

int compute_411() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_411() << std::endl;
    return 0;
}
