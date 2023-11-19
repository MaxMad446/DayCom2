// Auto-generated module | 2026-05-11T22:15:08.076182
#include <iostream>
#include <vector>

int compute_838() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_838() << std::endl;
    return 0;
}
