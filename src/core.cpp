// Auto-generated module | 2026-05-11T22:19:09.809119
#include <iostream>
#include <vector>

int compute_471() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
