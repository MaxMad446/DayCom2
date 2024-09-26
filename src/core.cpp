// Auto-generated module | 2026-05-12T03:40:16.474368
#include <iostream>
#include <vector>

int compute_206() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
