package main

// Auto-generated | 2026-05-11T22:50:14.876259
import "fmt"

func Process_841() int {
    base := 121
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
