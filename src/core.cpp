// Auto-generated module | 2026-05-14T06:11:20.993745
#include <iostream>
#include <vector>

int compute_250() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
