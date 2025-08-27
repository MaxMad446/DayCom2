// Auto-generated module | 2026-05-12T04:24:15.973870
#include <iostream>
#include <vector>

int compute_838() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_838() << std::endl;
    return 0;
}
