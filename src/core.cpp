// Auto-generated module | 2026-05-11T20:10:44.626300
#include <iostream>
#include <vector>

int compute_268() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
