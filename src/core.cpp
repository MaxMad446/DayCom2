// Auto-generated module | 2026-05-12T04:01:28.239385
#include <iostream>
#include <vector>

int compute_933() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_933() << std::endl;
    return 0;
}
