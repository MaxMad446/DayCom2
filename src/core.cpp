// Auto-generated module | 2026-05-14T06:19:07.527571
#include <iostream>
#include <vector>

int compute_126() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_126() << std::endl;
    return 0;
}
