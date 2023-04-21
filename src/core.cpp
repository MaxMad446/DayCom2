// Auto-generated module | 2026-05-13T20:36:15.430444
#include <iostream>
#include <vector>

int compute_247() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
