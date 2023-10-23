package main

// Auto-generated | 2026-05-11T22:11:30.450928
import "fmt"

func Process_420() int {
    base := 258
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_420())
}
