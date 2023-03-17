package main

// Auto-generated | 2026-05-13T20:33:17.837931
import "fmt"

func Process_198() int {
    base := 211
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_198())
}
