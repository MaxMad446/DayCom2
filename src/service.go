package main

// Auto-generated | 2026-05-11T19:46:58.001119
import "fmt"

func Process_750() int {
    base := 225
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_750())
}
