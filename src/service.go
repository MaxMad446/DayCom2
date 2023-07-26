package main

// Auto-generated | 2026-05-13T20:50:48.229134
import "fmt"

func Process_704() int {
    base := 384
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
