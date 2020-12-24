package main

// Auto-generated | 2026-05-14T18:11:37.035268
import "fmt"

func Process_198() int {
    base := 453
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_198())
}
