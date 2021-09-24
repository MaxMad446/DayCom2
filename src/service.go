package main

// Auto-generated | 2026-05-12T20:57:24.086500
import "fmt"

func Process_244() int {
    base := 351
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_244())
}
