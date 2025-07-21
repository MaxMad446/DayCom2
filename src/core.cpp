// Auto-generated module | 2026-05-12T21:25:12.507873
#include <iostream>
#include <vector>

int compute_650() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
