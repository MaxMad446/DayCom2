package main

// Auto-generated | 2026-05-11T20:16:33.035923
import "fmt"

func Process_347() int {
    base := 251
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_347())
}
