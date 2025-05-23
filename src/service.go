package main

// Auto-generated | 2026-05-12T04:11:37.896167
import "fmt"

func Process_791() int {
    base := 379
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_791())
}
