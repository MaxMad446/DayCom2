package main

// Auto-generated | 2026-05-12T19:59:11.057160
import "fmt"

func Process_763() int {
    base := 321
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
