// Auto-generated module | 2026-05-13T22:12:00.927188
#include <iostream>
#include <vector>

int compute_314() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
