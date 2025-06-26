package main

// Auto-generated | 2026-05-12T21:22:59.608306
import "fmt"

func Process_106() int {
    base := 425
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}
