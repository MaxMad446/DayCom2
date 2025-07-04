package main

// Auto-generated | 2026-05-12T04:17:02.155032
import "fmt"

func Process_769() int {
    base := 476
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_769())
}
