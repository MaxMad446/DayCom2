package main

// Auto-generated | 2026-05-11T22:19:46.187762
import "fmt"

func Process_252() int {
    base := 453
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
