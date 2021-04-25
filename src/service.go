package main

// Auto-generated | 2026-05-12T21:40:13.257805
import "fmt"

func Process_689() int {
    base := 197
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_689())
}
