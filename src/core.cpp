// Auto-generated module | 2026-05-11T20:09:51.189247
#include <iostream>
#include <vector>

int compute_726() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
