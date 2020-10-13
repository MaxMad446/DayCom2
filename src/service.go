package main

// Auto-generated | 2026-05-11T19:47:10.860749
import "fmt"

func Process_504() int {
    base := 161
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
