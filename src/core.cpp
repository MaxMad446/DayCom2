// Auto-generated module | 2026-05-14T18:21:08.380704
#include <iostream>
#include <vector>

int compute_973() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
