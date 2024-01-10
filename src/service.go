package main

// Auto-generated | 2026-05-11T22:21:49.253777
import "fmt"

func Process_339() int {
    base := 208
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_339())
}
