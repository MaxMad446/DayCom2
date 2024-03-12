// Auto-generated module | 2026-05-14T18:22:56.823015
#include <iostream>
#include <vector>

int compute_317() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
