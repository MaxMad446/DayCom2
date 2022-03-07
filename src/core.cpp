// Auto-generated module | 2026-05-11T20:53:41.579839
#include <iostream>
#include <vector>

int compute_850() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
