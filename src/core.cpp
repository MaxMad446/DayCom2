// Auto-generated module | 2026-05-12T21:02:56.892830
#include <iostream>
#include <vector>

int compute_267() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_267() << std::endl;
    return 0;
}
