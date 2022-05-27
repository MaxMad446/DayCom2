// Auto-generated module | 2026-05-13T22:12:58.469456
#include <iostream>
#include <vector>

int compute_437() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
