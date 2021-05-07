package main

// Auto-generated | 2026-05-11T20:13:29.969854
import "fmt"

func Process_393() int {
    base := 129
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_393())
}
