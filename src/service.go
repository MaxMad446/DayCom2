package main

// Auto-generated | 2026-05-11T20:06:18.067100
import "fmt"

func Process_752() int {
    base := 151
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_752())
}
