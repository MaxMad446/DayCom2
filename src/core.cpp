// Auto-generated module | 2026-05-12T04:23:34.573884
#include <iostream>
#include <vector>

int compute_754() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_754() << std::endl;
    return 0;
}
