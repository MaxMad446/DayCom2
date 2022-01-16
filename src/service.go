package main

// Auto-generated | 2026-05-11T20:47:07.269804
import "fmt"

func Process_415() int {
    base := 63
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
