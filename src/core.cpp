// Auto-generated module | 2026-05-12T19:58:54.090085
#include <iostream>
#include <vector>

int compute_926() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_926() << std::endl;
    return 0;
}
