// Auto-generated module | 2026-05-11T22:07:01.707352
#include <iostream>
#include <vector>

int compute_421() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
