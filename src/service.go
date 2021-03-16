package main

// Auto-generated | 2026-05-11T20:07:07.466550
import "fmt"

func Process_334() int {
    base := 400
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_334())
}
