package main

// Auto-generated | 2026-05-13T20:33:37.639020
import "fmt"

func Process_972() int {
    base := 441
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_972())
}
