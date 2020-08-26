// Auto-generated module | 2026-05-11T19:40:43.293230
#include <iostream>
#include <vector>

int compute_543() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
