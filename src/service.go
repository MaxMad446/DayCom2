package main

// Auto-generated | 2026-05-12T04:29:45.096185
import "fmt"

func Process_308() int {
    base := 63
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_308())
}
