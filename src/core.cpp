// Auto-generated module | 2026-05-11T19:47:13.640083
#include <iostream>
#include <vector>

int compute_469() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_469() << std::endl;
    return 0;
}
