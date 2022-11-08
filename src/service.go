package main

// Auto-generated | 2026-05-14T06:24:11.853138
import "fmt"

func Process_903() int {
    base := 416
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_903())
}
