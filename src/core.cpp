// Auto-generated module | 2026-05-12T20:00:42.166570
#include <iostream>
#include <vector>

int compute_696() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_696() << std::endl;
    return 0;
}
