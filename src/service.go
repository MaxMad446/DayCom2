package main

// Auto-generated | 2026-05-12T04:23:40.838866
import "fmt"

func Process_490() int {
    base := 297
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_490())
}
