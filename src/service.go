package main

// Auto-generated | 2026-05-12T21:41:09.286963
import "fmt"

func Process_705() int {
    base := 24
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_705())
}
