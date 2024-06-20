// Auto-generated module | 2026-05-11T22:42:58.065736
#include <iostream>
#include <vector>

int compute_417() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_417() << std::endl;
    return 0;
}
