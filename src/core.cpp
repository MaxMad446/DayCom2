// Auto-generated module | 2026-05-13T22:12:40.275639
#include <iostream>
#include <vector>

int compute_330() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
