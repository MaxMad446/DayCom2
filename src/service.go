package main

// Auto-generated | 2026-05-12T04:45:33.409234
import "fmt"

func Process_422() int {
    base := 136
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_422())
}
