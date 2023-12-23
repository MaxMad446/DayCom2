// Auto-generated module | 2026-05-11T22:19:31.746656
#include <iostream>
#include <vector>

int compute_491() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
