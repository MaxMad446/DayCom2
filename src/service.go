package main

// Auto-generated | 2026-05-14T18:14:59.877996
import "fmt"

func Process_198() int {
    base := 433
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_198())
}
