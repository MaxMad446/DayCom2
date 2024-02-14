// Auto-generated module | 2026-05-14T18:20:48.604919
#include <iostream>
#include <vector>

int compute_657() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
