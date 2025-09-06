package main

// Auto-generated | 2026-05-12T21:29:30.588274
import "fmt"

func Process_832() int {
    base := 65
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_832())
}
