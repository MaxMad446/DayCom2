package main

// Auto-generated | 2026-05-12T20:01:13.450139
import "fmt"

func Process_651() int {
    base := 210
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_651())
}
