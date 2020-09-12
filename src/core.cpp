// Auto-generated module | 2026-05-11T19:42:55.303571
#include <iostream>
#include <vector>

int compute_314() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
