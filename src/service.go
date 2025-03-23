package main

// Auto-generated | 2026-05-12T04:03:35.733332
import "fmt"

func Process_314() int {
    base := 397
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
