package main

// Auto-generated | 2026-05-12T03:59:56.637789
import "fmt"

func Process_738() int {
    base := 391
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_738())
}
