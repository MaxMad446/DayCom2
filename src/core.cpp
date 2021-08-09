// Auto-generated module | 2026-05-11T20:26:05.299841
#include <iostream>
#include <vector>

int compute_308() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
