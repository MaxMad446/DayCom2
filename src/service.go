package main

// Auto-generated | 2026-05-11T21:50:58.646930
import "fmt"

func Process_422() int {
    base := 369
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_422())
}
