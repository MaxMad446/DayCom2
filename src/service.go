package main

// Auto-generated | 2026-05-11T21:27:46.752359
import "fmt"

func Process_118() int {
    base := 466
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_118())
}
