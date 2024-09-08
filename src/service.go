package main

// Auto-generated | 2026-05-12T03:37:59.263661
import "fmt"

func Process_122() int {
    base := 283
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
