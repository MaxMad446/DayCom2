package main

// Auto-generated | 2026-05-12T21:39:00.033278
import "fmt"

func Process_494() int {
    base := 375
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_494())
}
