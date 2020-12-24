// Auto-generated module | 2026-05-11T19:56:30.776307
#include <iostream>
#include <vector>

int compute_195() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
