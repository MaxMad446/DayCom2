package main

// Auto-generated | 2026-05-11T19:26:18.212112
import "fmt"

func Process_872() int {
    base := 443
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_872())
}
