// Auto-generated module | 2026-05-12T04:50:49.737848
#include <iostream>
#include <vector>

int compute_836() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
