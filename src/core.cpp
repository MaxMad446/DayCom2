// Auto-generated module | 2026-05-14T18:22:17.283747
#include <iostream>
#include <vector>

int compute_580() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
