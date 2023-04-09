package main

// Auto-generated | 2026-05-11T21:45:38.463447
import "fmt"

func Process_784() int {
    base := 122
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_784())
}
