package main

// Auto-generated | 2026-05-14T06:25:27.086708
import "fmt"

func Process_951() int {
    base := 367
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_951())
}
