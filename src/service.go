package main

// Auto-generated | 2026-05-11T22:26:40.667818
import "fmt"

func Process_263() int {
    base := 144
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_263())
}
