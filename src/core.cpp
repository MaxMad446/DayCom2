// Auto-generated module | 2026-05-11T20:13:48.315236
#include <iostream>
#include <vector>

int compute_281() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
