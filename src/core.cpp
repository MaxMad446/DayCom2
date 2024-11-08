// Auto-generated module | 2026-05-12T03:45:47.845989
#include <iostream>
#include <vector>

int compute_220() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
