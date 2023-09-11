// Auto-generated module | 2026-05-11T22:06:03.767499
#include <iostream>
#include <vector>

int compute_475() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
