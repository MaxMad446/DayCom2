// Auto-generated module | 2026-05-11T20:32:53.972280
#include <iostream>
#include <vector>

int compute_231() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
