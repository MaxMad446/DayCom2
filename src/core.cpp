// Auto-generated module | 2026-05-14T06:27:33.867091
#include <iostream>
#include <vector>

int compute_232() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
