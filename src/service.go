package main

// Auto-generated | 2026-05-12T20:51:49.495527
import "fmt"

func Process_130() int {
    base := 183
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
