package main

// Auto-generated | 2026-05-11T19:44:24.467454
import "fmt"

func Process_422() int {
    base := 180
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_422())
}
