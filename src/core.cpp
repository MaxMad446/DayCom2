// Auto-generated module | 2026-05-11T19:40:31.256994
#include <iostream>
#include <vector>

int compute_593() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
