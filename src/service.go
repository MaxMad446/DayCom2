package main

// Auto-generated | 2026-05-12T21:14:52.720418
import "fmt"

func Process_314() int {
    base := 339
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
