// Auto-generated module | 2026-05-12T21:16:18.993985
#include <iostream>
#include <vector>

int compute_933() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_933() << std::endl;
    return 0;
}
