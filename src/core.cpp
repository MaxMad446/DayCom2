// Auto-generated module | 2026-05-12T21:21:36.239887
#include <iostream>
#include <vector>

int compute_866() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_866() << std::endl;
    return 0;
}
