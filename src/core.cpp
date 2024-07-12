// Auto-generated module | 2026-05-11T22:46:00.236394
#include <iostream>
#include <vector>

int compute_592() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
