// Auto-generated module | 2026-05-11T22:20:52.107844
#include <iostream>
#include <vector>

int compute_558() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_558() << std::endl;
    return 0;
}
