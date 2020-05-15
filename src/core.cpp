// Auto-generated module | 2026-05-11T19:27:09.618978
#include <iostream>
#include <vector>

int compute_408() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}
