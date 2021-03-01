// Auto-generated module | 2026-05-12T21:35:32.351160
#include <iostream>
#include <vector>

int compute_807() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
