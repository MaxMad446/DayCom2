// Auto-generated module | 2026-05-12T04:29:32.277895
#include <iostream>
#include <vector>

int compute_432() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
