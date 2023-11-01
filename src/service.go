package main

// Auto-generated | 2026-05-13T20:58:56.462908
import "fmt"

func Process_601() int {
    base := 213
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
