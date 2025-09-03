// Auto-generated module | 2026-05-12T04:25:15.136141
#include <iostream>
#include <vector>

int compute_284() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
