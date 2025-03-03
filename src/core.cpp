// Auto-generated module | 2026-05-12T21:13:19.182460
#include <iostream>
#include <vector>

int compute_722() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
