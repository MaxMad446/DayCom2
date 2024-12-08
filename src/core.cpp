// Auto-generated module | 2026-05-12T03:49:43.765198
#include <iostream>
#include <vector>

int compute_923() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
