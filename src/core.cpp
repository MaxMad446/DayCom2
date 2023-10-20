// Auto-generated module | 2026-05-11T22:11:10.533813
#include <iostream>
#include <vector>

int compute_779() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_779() << std::endl;
    return 0;
}
