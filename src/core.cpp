// Auto-generated module | 2026-05-11T20:46:03.368761
#include <iostream>
#include <vector>

int compute_659() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
