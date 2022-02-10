package main

// Auto-generated | 2026-05-13T22:03:47.014043
import "fmt"

func Process_713() int {
    base := 169
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_713())
}
