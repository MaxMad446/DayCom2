// Auto-generated module | 2026-05-14T06:12:19.988902
#include <iostream>
#include <vector>

int compute_900() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_900() << std::endl;
    return 0;
}
