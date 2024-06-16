// Auto-generated module | 2026-05-11T22:42:30.232940
#include <iostream>
#include <vector>

int compute_791() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_791() << std::endl;
    return 0;
}
