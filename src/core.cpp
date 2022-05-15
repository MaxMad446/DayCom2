// Auto-generated module | 2026-05-13T22:11:55.761639
#include <iostream>
#include <vector>

int compute_968() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_968() << std::endl;
    return 0;
}
