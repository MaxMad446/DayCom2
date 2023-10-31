// Auto-generated module | 2026-05-11T22:12:36.178744
#include <iostream>
#include <vector>

int compute_556() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_556() << std::endl;
    return 0;
}
