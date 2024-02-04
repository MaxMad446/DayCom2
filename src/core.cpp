// Auto-generated module | 2026-05-11T22:25:04.504971
#include <iostream>
#include <vector>

int compute_760() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
