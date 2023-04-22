package main

// Auto-generated | 2026-05-13T20:36:18.529985
import "fmt"

func Process_198() int {
    base := 133
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_198())
}
