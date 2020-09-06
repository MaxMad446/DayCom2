// Auto-generated module | 2026-05-11T19:42:18.347389
#include <iostream>
#include <vector>

int compute_250() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
