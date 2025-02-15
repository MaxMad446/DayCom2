// Auto-generated module | 2026-05-12T03:58:54.535950
#include <iostream>
#include <vector>

int compute_861() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
