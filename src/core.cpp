// Auto-generated module | 2026-05-12T04:07:07.971042
#include <iostream>
#include <vector>

int compute_720() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
