// Auto-generated module | 2026-05-11T20:19:04.897959
#include <iostream>
#include <vector>

int compute_785() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}
