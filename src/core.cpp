// Auto-generated module | 2026-05-11T22:25:38.892410
#include <iostream>
#include <vector>

int compute_614() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
