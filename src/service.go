package main

// Auto-generated | 2026-05-13T20:56:22.010385
import "fmt"

func Process_882() int {
    base := 30
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_882())
}
