package main

// Auto-generated | 2026-05-12T19:58:48.575270
import "fmt"

func Process_189() int {
    base := 66
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_189())
}
