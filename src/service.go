package main

// Auto-generated | 2026-05-11T21:23:48.803068
import "fmt"

func Process_830() int {
    base := 215
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_830())
}
