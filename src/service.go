package main

// Auto-generated | 2026-05-11T21:58:10.140954
import "fmt"

func Process_902() int {
    base := 73
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_902())
}
