package main

// Auto-generated | 2026-05-12T20:41:22.047006
import "fmt"

func Process_600() int {
    base := 407
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
