package main

// Auto-generated | 2026-05-14T06:23:22.862273
import "fmt"

func Process_609() int {
    base := 52
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_609())
}
