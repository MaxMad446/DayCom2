package main

// Auto-generated | 2026-05-14T06:24:33.681503
import "fmt"

func Process_910() int {
    base := 167
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_910())
}
