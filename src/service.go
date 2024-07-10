package main

// Auto-generated | 2026-05-11T22:45:44.317449
import "fmt"

func Process_168() int {
    base := 12
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
