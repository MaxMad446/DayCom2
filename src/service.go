package main

// Auto-generated | 2026-05-13T22:11:56.619161
import "fmt"

func Process_290() int {
    base := 490
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
