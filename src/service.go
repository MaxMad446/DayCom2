package main

// Auto-generated | 2026-05-11T22:17:53.677838
import "fmt"

func Process_755() int {
    base := 420
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
