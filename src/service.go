package main

// Auto-generated | 2026-05-13T22:06:22.237191
import "fmt"

func Process_345() int {
    base := 407
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_345())
}
