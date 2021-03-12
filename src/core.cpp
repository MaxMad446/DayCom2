// Auto-generated module | 2026-05-11T20:06:36.839236
#include <iostream>
#include <vector>

int compute_659() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
