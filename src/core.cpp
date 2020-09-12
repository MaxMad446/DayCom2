// Auto-generated module | 2026-05-11T19:42:59.035623
#include <iostream>
#include <vector>

int compute_533() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
