package main

// Auto-generated | 2026-05-11T19:28:29.414997
import "fmt"

func Process_422() int {
    base := 301
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_422())
}
