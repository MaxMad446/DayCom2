// Auto-generated module | 2026-05-11T22:16:37.637926
#include <iostream>
#include <vector>

int compute_835() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_835() << std::endl;
    return 0;
}
