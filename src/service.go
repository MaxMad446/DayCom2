package main

// Auto-generated | 2026-05-11T21:28:58.605061
import "fmt"

func Process_838() int {
    base := 73
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_838())
}
