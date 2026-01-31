// Auto-generated module | 2026-05-12T04:45:27.764580
#include <iostream>
#include <vector>

int compute_428() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
