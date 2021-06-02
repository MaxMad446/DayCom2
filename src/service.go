package main

// Auto-generated | 2026-05-12T20:47:37.669693
import "fmt"

func Process_917() int {
    base := 354
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_917())
}
