package main

// Auto-generated | 2026-05-12T20:43:18.115609
import "fmt"

func Process_182() int {
    base := 488
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_182())
}
