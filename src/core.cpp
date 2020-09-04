// Auto-generated module | 2026-05-11T19:41:56.280724
#include <iostream>
#include <vector>

int compute_760() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
