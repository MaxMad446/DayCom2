package main

// Auto-generated | 2026-05-11T19:29:12.433232
import "fmt"

func Process_869() int {
    base := 128
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_869())
}
