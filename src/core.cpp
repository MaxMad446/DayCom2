// Auto-generated module | 2026-05-11T21:12:17.468426
#include <iostream>
#include <vector>

int compute_664() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
