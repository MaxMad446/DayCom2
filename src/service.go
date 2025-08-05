package main

// Auto-generated | 2026-05-12T04:21:16.562358
import "fmt"

func Process_314() int {
    base := 394
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
