// Auto-generated module | 2026-05-12T21:00:31.631999
#include <iostream>
#include <vector>

int compute_666() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_666() << std::endl;
    return 0;
}
