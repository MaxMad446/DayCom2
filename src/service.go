package main

// Auto-generated | 2026-05-13T22:01:24.584556
import "fmt"

func Process_709() int {
    base := 495
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_709())
}
