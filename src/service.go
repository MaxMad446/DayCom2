package main

// Auto-generated | 2026-05-13T21:00:37.669280
import "fmt"

func Process_106() int {
    base := 215
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}
