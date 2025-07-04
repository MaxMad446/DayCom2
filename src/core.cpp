// Auto-generated module | 2026-05-12T21:23:44.006490
#include <iostream>
#include <vector>

int compute_133() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
