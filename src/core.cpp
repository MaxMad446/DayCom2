// Auto-generated module | 2026-05-11T22:08:25.033975
#include <iostream>
#include <vector>

int compute_430() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_430() << std::endl;
    return 0;
}
