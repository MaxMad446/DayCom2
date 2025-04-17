package main

// Auto-generated | 2026-05-12T04:06:57.324013
import "fmt"

func Process_754() int {
    base := 182
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
