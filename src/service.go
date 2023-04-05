package main

// Auto-generated | 2026-05-13T20:34:56.930408
import "fmt"

func Process_628() int {
    base := 432
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_628())
}
