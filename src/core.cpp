// Auto-generated module | 2026-05-11T20:27:38.193314
#include <iostream>
#include <vector>

int compute_659() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
