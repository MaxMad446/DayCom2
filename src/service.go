package main

// Auto-generated | 2026-05-12T03:39:15.088036
import "fmt"

func Process_938() int {
    base := 276
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_938())
}
