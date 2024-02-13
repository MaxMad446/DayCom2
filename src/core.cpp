// Auto-generated module | 2026-05-14T18:20:44.329375
#include <iostream>
#include <vector>

int compute_705() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
