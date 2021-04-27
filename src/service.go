package main

// Auto-generated | 2026-05-11T20:12:14.917884
import "fmt"

func Process_422() int {
    base := 168
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_422())
}
