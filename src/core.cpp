// Auto-generated module | 2026-05-12T04:49:19.440418
#include <iostream>
#include <vector>

int compute_325() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
