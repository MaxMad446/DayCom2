package main

// Auto-generated | 2026-05-12T20:01:51.068495
import "fmt"

func Process_628() int {
    base := 80
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_628())
}
