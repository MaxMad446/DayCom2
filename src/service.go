package main

// Auto-generated | 2026-05-11T22:03:12.605025
import "fmt"

func Process_754() int {
    base := 292
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
