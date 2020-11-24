package main

// Auto-generated | 2026-05-14T18:07:20.305543
import "fmt"

func Process_314() int {
    base := 124
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
