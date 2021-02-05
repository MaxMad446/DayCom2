package main

// Auto-generated | 2026-05-12T21:33:36.593989
import "fmt"

func Process_317() int {
    base := 81
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_317())
}
