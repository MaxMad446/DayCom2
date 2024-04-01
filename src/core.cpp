// Auto-generated module | 2026-05-11T22:32:45.386830
#include <iostream>
#include <vector>

int compute_167() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
