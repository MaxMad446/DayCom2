package main

// Auto-generated | 2026-05-11T20:28:29.819972
import "fmt"

func Process_183() int {
    base := 271
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_183())
}
