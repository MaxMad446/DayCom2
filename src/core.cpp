// Auto-generated module | 2026-05-12T04:39:52.257898
#include <iostream>
#include <vector>

int compute_579() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_579() << std::endl;
    return 0;
}
