package main

// Auto-generated | 2026-05-14T06:21:35.238295
import "fmt"

func Process_198() int {
    base := 37
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_198())
}
