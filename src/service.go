package main

// Auto-generated | 2026-05-13T20:31:29.735604
import "fmt"

func Process_952() int {
    base := 258
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_952())
}
