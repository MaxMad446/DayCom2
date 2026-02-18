package main

// Auto-generated | 2026-05-12T04:48:01.908265
import "fmt"

func Process_772() int {
    base := 453
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_772())
}
