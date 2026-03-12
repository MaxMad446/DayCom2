// Auto-generated module | 2026-05-12T04:50:54.313042
#include <iostream>
#include <vector>

int compute_465() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
