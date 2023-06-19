// Auto-generated module | 2026-05-13T20:47:52.106667
#include <iostream>
#include <vector>

int compute_799() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
