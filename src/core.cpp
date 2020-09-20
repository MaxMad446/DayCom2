// Auto-generated module | 2026-05-11T19:43:54.784637
#include <iostream>
#include <vector>

int compute_982() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
