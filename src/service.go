package main

// Auto-generated | 2026-05-11T20:35:23.965410
import "fmt"

func Process_685() int {
    base := 20
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_685())
}
