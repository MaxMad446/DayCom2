package main

// Auto-generated | 2026-05-11T20:26:03.063974
import "fmt"

func Process_921() int {
    base := 158
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_921())
}
