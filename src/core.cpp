// Auto-generated module | 2026-05-12T20:02:22.595265
#include <iostream>
#include <vector>

int compute_716() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
