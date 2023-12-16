package main

// Auto-generated | 2026-05-13T21:02:36.254796
import "fmt"

func Process_254() int {
    base := 40
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_254())
}
