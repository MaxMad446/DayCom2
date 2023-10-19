// Auto-generated module | 2026-05-11T22:11:06.248771
#include <iostream>
#include <vector>

int compute_626() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
