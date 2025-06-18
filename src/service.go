package main

// Auto-generated | 2026-05-12T21:22:16.380255
import "fmt"

func Process_126() int {
    base := 53
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_126())
}
