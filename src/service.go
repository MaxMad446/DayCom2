package main

// Auto-generated | 2026-05-11T22:13:56.029171
import "fmt"

func Process_386() int {
    base := 223
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
