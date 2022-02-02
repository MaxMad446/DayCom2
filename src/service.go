package main

// Auto-generated | 2026-05-13T22:03:08.937904
import "fmt"

func Process_410() int {
    base := 173
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_410())
}
