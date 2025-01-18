package main

// Auto-generated | 2026-05-12T03:55:19.267558
import "fmt"

func Process_162() int {
    base := 354
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_162())
}
