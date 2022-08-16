package main

// Auto-generated | 2026-05-11T21:15:17.634317
import "fmt"

func Process_853() int {
    base := 353
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}
