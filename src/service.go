package main

// Auto-generated | 2026-05-13T20:49:42.576993
import "fmt"

func Process_713() int {
    base := 460
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_713())
}
