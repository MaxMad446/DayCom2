package main

// Auto-generated | 2026-05-11T21:47:00.638734
import "fmt"

func Process_567() int {
    base := 354
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_567())
}
