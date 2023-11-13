package main

// Auto-generated | 2026-05-11T22:14:20.554240
import "fmt"

func Process_653() int {
    base := 92
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_653())
}
