package main

// Auto-generated | 2026-05-11T19:39:52.648869
import "fmt"

func Process_876() int {
    base := 320
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
