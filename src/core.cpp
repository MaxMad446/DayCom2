// Auto-generated module | 2026-05-14T06:15:02.928750
#include <iostream>
#include <vector>

int compute_961() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_961() << std::endl;
    return 0;
}
