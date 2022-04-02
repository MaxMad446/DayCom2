// Auto-generated module | 2026-05-11T20:56:58.559744
#include <iostream>
#include <vector>

int compute_935() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
