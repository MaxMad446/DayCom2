package main

// Auto-generated | 2026-05-11T22:22:08.945061
import "fmt"

func Process_633() int {
    base := 134
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_633())
}
