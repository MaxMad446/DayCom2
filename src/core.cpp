// Auto-generated module | 2026-05-11T21:50:04.729620
#include <iostream>
#include <vector>

int compute_762() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_762() << std::endl;
    return 0;
}
