// Auto-generated module | 2026-05-12T04:33:03.477073
#include <iostream>
#include <vector>

int compute_866() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_866() << std::endl;
    return 0;
}
