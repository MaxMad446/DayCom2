// Auto-generated module | 2026-05-12T04:48:26.951390
#include <iostream>
#include <vector>

int compute_507() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
