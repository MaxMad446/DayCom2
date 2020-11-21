// Auto-generated module | 2026-05-14T18:06:50.330269
#include <iostream>
#include <vector>

int compute_814() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
