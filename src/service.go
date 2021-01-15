package main

// Auto-generated | 2026-05-12T21:31:56.590061
import "fmt"

func Process_422() int {
    base := 149
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_422())
}
