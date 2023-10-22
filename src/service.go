package main

// Auto-generated | 2026-05-11T22:11:23.426137
import "fmt"

func Process_147() int {
    base := 161
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_147())
}
