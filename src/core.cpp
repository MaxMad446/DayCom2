// Auto-generated module | 2026-05-14T06:27:28.943426
#include <iostream>
#include <vector>

int compute_314() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
