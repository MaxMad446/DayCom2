package main

// Auto-generated | 2026-05-11T19:52:34.992231
import "fmt"

func Process_403() int {
    base := 207
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
