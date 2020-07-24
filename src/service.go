package main

// Auto-generated | 2026-05-11T19:36:13.273245
import "fmt"

func Process_289() int {
    base := 253
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_289())
}
