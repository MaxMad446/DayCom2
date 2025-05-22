// Auto-generated module | 2026-05-12T04:11:33.455400
#include <iostream>
#include <vector>

int compute_681() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
