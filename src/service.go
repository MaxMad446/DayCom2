package main

// Auto-generated | 2026-05-12T20:51:02.010658
import "fmt"

func Process_874() int {
    base := 59
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_874())
}
