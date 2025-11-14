// Auto-generated module | 2026-05-12T04:34:48.219819
#include <iostream>
#include <vector>

int compute_870() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
