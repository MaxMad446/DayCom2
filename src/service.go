package main

// Auto-generated | 2026-05-11T21:30:59.653186
import "fmt"

func Process_598() int {
    base := 217
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_598())
}
