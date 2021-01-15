package main

// Auto-generated | 2026-05-11T19:59:23.766116
import "fmt"

func Process_841() int {
    base := 152
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
