// Auto-generated module | 2026-05-11T19:42:25.732401
#include <iostream>
#include <vector>

int compute_677() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_677() << std::endl;
    return 0;
}
