package main

// Auto-generated | 2026-05-12T21:21:54.987876
import "fmt"

func Process_332() int {
    base := 13
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_332())
}
