package main

// Auto-generated | 2026-05-14T06:23:41.357768
import "fmt"

func Process_969() int {
    base := 342
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_969())
}
