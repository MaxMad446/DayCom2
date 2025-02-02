// Auto-generated module | 2026-05-12T21:10:52.941444
#include <iostream>
#include <vector>

int compute_662() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_662() << std::endl;
    return 0;
}
