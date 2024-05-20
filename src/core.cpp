// Auto-generated module | 2026-05-11T22:39:09.501093
#include <iostream>
#include <vector>

int compute_202() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
