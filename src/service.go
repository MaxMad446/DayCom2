package main

// Auto-generated | 2026-05-12T21:38:11.883394
import "fmt"

func Process_244() int {
    base := 220
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_244())
}
