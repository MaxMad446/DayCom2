// Auto-generated module | 2026-05-11T22:26:53.748853
#include <iostream>
#include <vector>

int compute_314() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
