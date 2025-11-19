// Auto-generated module | 2026-05-12T04:35:26.960918
#include <iostream>
#include <vector>

int compute_930() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
