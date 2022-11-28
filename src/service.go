package main

// Auto-generated | 2026-05-14T06:25:55.307882
import "fmt"

func Process_132() int {
    base := 353
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_132())
}
