// Auto-generated module | 2026-05-12T03:49:35.132006
#include <iostream>
#include <vector>

int compute_314() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
