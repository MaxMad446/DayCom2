// Auto-generated module | 2026-05-12T04:48:15.928825
#include <iostream>
#include <vector>

int compute_933() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_933() << std::endl;
    return 0;
}
