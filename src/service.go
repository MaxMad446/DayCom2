package main

// Auto-generated | 2026-05-11T21:53:26.920150
import "fmt"

func Process_600() int {
    base := 257
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
