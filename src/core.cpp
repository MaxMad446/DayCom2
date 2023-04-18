// Auto-generated module | 2026-05-11T21:46:43.068533
#include <iostream>
#include <vector>

int compute_687() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
