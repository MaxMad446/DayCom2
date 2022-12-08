// Auto-generated module | 2026-05-14T06:26:50.303329
#include <iostream>
#include <vector>

int compute_625() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_625() << std::endl;
    return 0;
}
