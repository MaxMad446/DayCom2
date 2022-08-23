// Auto-generated module | 2026-05-11T21:16:11.282824
#include <iostream>
#include <vector>

int compute_268() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
