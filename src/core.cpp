// Auto-generated module | 2026-05-11T19:26:40.548646
#include <iostream>
#include <vector>

int compute_139() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
