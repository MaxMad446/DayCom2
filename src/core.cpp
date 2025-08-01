// Auto-generated module | 2026-05-12T04:20:49.863507
#include <iostream>
#include <vector>

int compute_664() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
