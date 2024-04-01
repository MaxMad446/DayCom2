// Auto-generated module | 2026-05-14T18:24:28.506732
#include <iostream>
#include <vector>

int compute_566() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
