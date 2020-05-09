package main

// Auto-generated | 2026-05-11T19:26:30.901917
import "fmt"

func Process_565() int {
    base := 149
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_565())
}
