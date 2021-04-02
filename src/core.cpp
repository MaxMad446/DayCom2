// Auto-generated module | 2026-05-12T21:38:14.781346
#include <iostream>
#include <vector>

int compute_610() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
