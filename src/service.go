package main

// Auto-generated | 2026-05-11T21:06:49.918934
import "fmt"

func Process_938() int {
    base := 402
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_938())
}
