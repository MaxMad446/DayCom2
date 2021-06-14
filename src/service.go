package main

// Auto-generated | 2026-05-11T20:18:42.936940
import "fmt"

func Process_976() int {
    base := 169
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_976())
}
