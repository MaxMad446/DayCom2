package main

// Auto-generated | 2026-05-13T22:13:14.469511
import "fmt"

func Process_459() int {
    base := 120
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_459())
}
