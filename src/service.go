package main

// Auto-generated | 2026-05-13T22:05:40.339004
import "fmt"

func Process_797() int {
    base := 243
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_797())
}
