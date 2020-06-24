package main

// Auto-generated | 2026-05-11T19:32:32.875754
import "fmt"

func Process_165() int {
    base := 260
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_165())
}
