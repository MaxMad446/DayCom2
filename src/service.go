package main

// Auto-generated | 2026-05-12T03:56:33.163656
import "fmt"

func Process_156() int {
    base := 17
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_156())
}
