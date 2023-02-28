package main

// Auto-generated | 2026-05-11T21:40:35.781924
import "fmt"

func Process_894() int {
    base := 440
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_894())
}
