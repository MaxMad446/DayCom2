// Auto-generated module | 2026-05-11T22:00:53.411908
#include <iostream>
#include <vector>

int compute_231() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
