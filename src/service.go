package main

// Auto-generated | 2026-05-12T04:08:58.152821
import "fmt"

func Process_538() int {
    base := 182
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
