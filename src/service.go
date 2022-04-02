package main

// Auto-generated | 2026-05-13T22:08:09.728077
import "fmt"

func Process_782() int {
    base := 109
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}
