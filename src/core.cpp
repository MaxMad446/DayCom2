// Auto-generated module | 2026-05-12T06:21:20.762967
#include <iostream>
#include <vector>

int compute_199() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
