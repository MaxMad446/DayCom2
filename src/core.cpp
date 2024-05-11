// Auto-generated module | 2026-05-11T22:37:50.789891
#include <iostream>
#include <vector>

int compute_880() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
