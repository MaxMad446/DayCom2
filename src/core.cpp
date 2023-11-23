// Auto-generated module | 2026-05-13T21:00:45.317620
#include <iostream>
#include <vector>

int compute_785() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}
