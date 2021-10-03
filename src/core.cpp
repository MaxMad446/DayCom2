// Auto-generated module | 2026-05-12T20:58:12.852762
#include <iostream>
#include <vector>

int compute_858() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_858() << std::endl;
    return 0;
}
