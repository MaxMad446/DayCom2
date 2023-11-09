// Auto-generated module | 2026-05-11T22:13:44.766683
#include <iostream>
#include <vector>

int compute_473() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_473() << std::endl;
    return 0;
}
