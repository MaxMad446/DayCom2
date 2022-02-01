// Auto-generated module | 2026-05-11T20:49:15.576889
#include <iostream>
#include <vector>

int compute_559() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
