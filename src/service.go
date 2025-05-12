package main

// Auto-generated | 2026-05-12T21:18:59.978213
import "fmt"

func Process_872() int {
    base := 244
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_872())
}
