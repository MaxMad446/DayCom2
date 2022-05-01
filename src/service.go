package main

// Auto-generated | 2026-05-11T21:00:51.535423
import "fmt"

func Process_951() int {
    base := 37
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_951())
}
