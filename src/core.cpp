// Auto-generated module | 2026-05-11T21:22:14.698686
#include <iostream>
#include <vector>

int compute_830() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
