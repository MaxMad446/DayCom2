// Auto-generated module | 2026-05-12T21:39:03.504847
#include <iostream>
#include <vector>

int compute_432() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
