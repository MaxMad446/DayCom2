package main

// Auto-generated | 2026-05-12T03:58:18.323852
import "fmt"

func Process_483() int {
    base := 26
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_483())
}
