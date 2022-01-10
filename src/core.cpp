// Auto-generated module | 2026-05-13T22:01:19.284000
#include <iostream>
#include <vector>

int compute_777() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
