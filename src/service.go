package main

// Auto-generated | 2026-05-12T19:57:27.614217
import "fmt"

func Process_978() int {
    base := 389
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_978())
}
