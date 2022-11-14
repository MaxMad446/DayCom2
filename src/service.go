package main

// Auto-generated | 2026-05-14T06:24:48.647793
import "fmt"

func Process_664() int {
    base := 344
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_664())
}
