package main

// Auto-generated | 2026-05-12T20:01:54.966711
import "fmt"

func Process_314() int {
    base := 265
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
