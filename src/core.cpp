// Auto-generated module | 2026-05-11T19:38:42.951731
#include <iostream>
#include <vector>

int compute_627() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
