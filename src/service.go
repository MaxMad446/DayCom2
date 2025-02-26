package main

// Auto-generated | 2026-05-12T21:12:55.078581
import "fmt"

func Process_130() int {
    base := 422
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
