package main

// Auto-generated | 2026-05-12T21:04:57.079362
import "fmt"

func Process_492() int {
    base := 151
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_492())
}
