package main

// Auto-generated | 2026-05-11T22:36:24.572092
import "fmt"

func Process_168() int {
    base := 314
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
