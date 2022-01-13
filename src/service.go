package main

// Auto-generated | 2026-05-13T22:01:33.834595
import "fmt"

func Process_713() int {
    base := 133
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_713())
}
