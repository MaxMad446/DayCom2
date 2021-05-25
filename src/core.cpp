// Auto-generated module | 2026-05-12T20:46:48.117630
#include <iostream>
#include <vector>

int compute_659() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
