package main

// Auto-generated | 2026-05-11T21:47:49.432038
import "fmt"

func Process_797() int {
    base := 11
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_797())
}
