// Auto-generated module | 2026-05-12T03:43:55.430492
#include <iostream>
#include <vector>

int compute_845() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
