// Auto-generated module | 2026-05-13T20:27:39.882934
#include <iostream>
#include <vector>

int compute_284() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
