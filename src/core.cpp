// Auto-generated module | 2026-05-13T22:10:19.158572
#include <iostream>
#include <vector>

int compute_727() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_727() << std::endl;
    return 0;
}
