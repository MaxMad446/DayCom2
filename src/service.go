package main

// Auto-generated | 2026-05-11T21:11:51.129062
import "fmt"

func Process_701() int {
    base := 480
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_701())
}
