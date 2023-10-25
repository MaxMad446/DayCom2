package main

// Auto-generated | 2026-05-13T20:58:17.578005
import "fmt"

func Process_880() int {
    base := 224
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
