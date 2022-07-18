// Auto-generated module | 2026-05-14T06:15:03.804173
#include <iostream>
#include <vector>

int compute_878() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
