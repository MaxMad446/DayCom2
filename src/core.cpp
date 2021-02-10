// Auto-generated module | 2026-05-11T20:02:46.891867
#include <iostream>
#include <vector>

int compute_925() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
