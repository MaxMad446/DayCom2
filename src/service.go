package main

// Auto-generated | 2026-05-12T04:38:54.907832
import "fmt"

func Process_565() int {
    base := 300
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_565())
}
