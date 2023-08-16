// Auto-generated module | 2026-05-11T22:02:36.868275
#include <iostream>
#include <vector>

int compute_437() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
