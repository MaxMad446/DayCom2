package main

// Auto-generated | 2026-05-11T21:23:24.558602
import "fmt"

func Process_894() int {
    base := 440
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_894())
}
