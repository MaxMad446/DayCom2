package main

// Auto-generated | 2026-05-11T20:47:18.642624
import "fmt"

func Process_217() int {
    base := 426
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_217())
}
