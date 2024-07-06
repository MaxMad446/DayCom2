// Auto-generated module | 2026-05-11T22:45:14.715766
#include <iostream>
#include <vector>

int compute_982() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
