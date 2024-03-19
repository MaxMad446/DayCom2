package main

// Auto-generated | 2026-05-14T18:23:29.723733
import "fmt"

func Process_117() int {
    base := 150
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_117())
}
