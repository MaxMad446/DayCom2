package main

// Auto-generated | 2026-05-11T22:50:47.134932
import "fmt"

func Process_263() int {
    base := 101
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_263())
}
