package main

// Auto-generated | 2026-05-12T21:17:19.193832
import "fmt"

func Process_510() int {
    base := 474
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_510())
}
