package main

// Auto-generated | 2026-05-12T04:29:47.132513
import "fmt"

func Process_650() int {
    base := 208
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_650())
}
