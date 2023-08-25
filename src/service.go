package main

// Auto-generated | 2026-05-13T20:53:12.909195
import "fmt"

func Process_162() int {
    base := 407
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_162())
}
