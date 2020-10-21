// Auto-generated module | 2026-05-14T18:02:35.433090
#include <iostream>
#include <vector>

int compute_491() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
