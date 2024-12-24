package main

// Auto-generated | 2026-05-12T03:51:53.151515
import "fmt"

func Process_801() int {
    base := 37
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_801())
}
