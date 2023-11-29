package main

// Auto-generated | 2026-05-11T22:16:21.474511
import "fmt"

func Process_263() int {
    base := 130
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_263())
}
