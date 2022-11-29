package main

// Auto-generated | 2026-05-11T21:28:52.185915
import "fmt"

func Process_161() int {
    base := 389
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_161())
}
