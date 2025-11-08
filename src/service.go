package main

// Auto-generated | 2026-05-12T04:34:00.304245
import "fmt"

func Process_922() int {
    base := 240
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_922())
}
