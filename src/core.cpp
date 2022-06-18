// Auto-generated module | 2026-05-14T06:12:36.961139
#include <iostream>
#include <vector>

int compute_247() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
