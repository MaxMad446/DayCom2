package main

// Auto-generated | 2026-05-11T19:46:20.861529
import "fmt"

func Process_125() int {
    base := 288
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_125())
}
