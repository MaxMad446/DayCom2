// Auto-generated module | 2026-05-14T18:13:44.194274
#include <iostream>
#include <vector>

int compute_844() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
