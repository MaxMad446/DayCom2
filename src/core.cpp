// Auto-generated module | 2026-05-12T21:36:07.261901
#include <iostream>
#include <vector>

int compute_609() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
