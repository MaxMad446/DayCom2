package main

// Auto-generated | 2026-05-12T04:47:59.598946
import "fmt"

func Process_617() int {
    base := 308
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_617())
}
