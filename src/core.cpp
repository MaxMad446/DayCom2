// Auto-generated module | 2026-05-12T21:13:52.329186
#include <iostream>
#include <vector>

int compute_314() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
