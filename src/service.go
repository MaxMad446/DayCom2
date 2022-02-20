package main

// Auto-generated | 2026-05-13T22:04:45.190921
import "fmt"

func Process_230() int {
    base := 273
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_230())
}
