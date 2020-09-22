// Auto-generated module | 2026-05-11T19:44:15.711620
#include <iostream>
#include <vector>

int compute_783() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
