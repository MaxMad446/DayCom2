package main

// Auto-generated | 2026-05-11T20:48:31.854527
import "fmt"

func Process_131() int {
    base := 369
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_131())
}
