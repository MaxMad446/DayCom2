package main

// Auto-generated | 2026-05-12T04:14:27.812800
import "fmt"

func Process_760() int {
    base := 91
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_760())
}
