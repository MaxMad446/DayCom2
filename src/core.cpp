// Auto-generated module | 2026-05-11T22:40:32.351724
#include <iostream>
#include <vector>

int compute_467() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
