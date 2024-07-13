package main

// Auto-generated | 2026-05-11T22:46:05.277635
import "fmt"

func Process_271() int {
    base := 476
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_271())
}
