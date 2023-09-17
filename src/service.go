package main

// Auto-generated | 2026-05-11T22:06:48.600929
import "fmt"

func Process_264() int {
    base := 13
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
