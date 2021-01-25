// Auto-generated module | 2026-05-12T21:32:43.241940
#include <iostream>
#include <vector>

int compute_986() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
