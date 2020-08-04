// Auto-generated module | 2026-05-11T19:37:43.923606
#include <iostream>
#include <vector>

int compute_626() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
