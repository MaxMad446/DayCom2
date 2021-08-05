package main

// Auto-generated | 2026-05-11T20:25:41.644718
import "fmt"

func Process_261() int {
    base := 135
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_261())
}
