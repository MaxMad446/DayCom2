package main

// Auto-generated | 2026-05-13T22:10:04.772236
import "fmt"

func Process_502() int {
    base := 346
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
