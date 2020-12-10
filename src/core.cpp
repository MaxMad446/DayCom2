// Auto-generated module | 2026-05-11T19:54:40.203848
#include <iostream>
#include <vector>

int compute_340() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
