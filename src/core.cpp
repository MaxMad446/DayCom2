// Auto-generated module | 2026-05-12T19:57:23.120533
#include <iostream>
#include <vector>

int compute_892() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
