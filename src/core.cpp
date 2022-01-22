// Auto-generated module | 2026-05-13T22:02:22.484967
#include <iostream>
#include <vector>

int compute_725() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
