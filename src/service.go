package main

// Auto-generated | 2026-05-13T22:09:18.365999
import "fmt"

func Process_605() int {
    base := 465
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_605())
}
