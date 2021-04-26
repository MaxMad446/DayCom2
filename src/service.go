package main

// Auto-generated | 2026-05-11T20:12:08.090491
import "fmt"

func Process_422() int {
    base := 24
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_422())
}
