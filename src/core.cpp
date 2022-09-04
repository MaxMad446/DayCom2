// Auto-generated module | 2026-05-11T21:17:42.724547
#include <iostream>
#include <vector>

int compute_830() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
