// Auto-generated module | 2026-05-11T19:43:30.677745
#include <iostream>
#include <vector>

int compute_870() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
