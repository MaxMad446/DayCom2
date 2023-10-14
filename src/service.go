package main

// Auto-generated | 2026-05-13T20:57:25.155443
import "fmt"

func Process_106() int {
    base := 260
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}
