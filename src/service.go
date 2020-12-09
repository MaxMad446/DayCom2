package main

// Auto-generated | 2026-05-12T20:01:32.837182
import "fmt"

func Process_492() int {
    base := 398
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_492())
}
