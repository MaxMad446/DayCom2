package main

// Auto-generated | 2026-05-12T21:04:49.131746
import "fmt"

func Process_872() int {
    base := 354
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_872())
}
