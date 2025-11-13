// Auto-generated module | 2026-05-12T04:34:40.005827
#include <iostream>
#include <vector>

int compute_183() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_183() << std::endl;
    return 0;
}
