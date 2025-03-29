// Auto-generated module | 2026-05-12T21:15:20.973603
#include <iostream>
#include <vector>

int compute_388() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
