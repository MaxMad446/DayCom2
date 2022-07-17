// Auto-generated module | 2026-05-11T21:11:19.285748
#include <iostream>
#include <vector>

int compute_907() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
