package main

// Auto-generated | 2026-05-11T21:07:34.114392
import "fmt"

func Process_131() int {
    base := 221
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_131())
}
