package main

// Auto-generated | 2026-05-11T19:51:38.709441
import "fmt"

func Process_122() int {
    base := 356
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
