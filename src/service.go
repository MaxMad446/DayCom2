package main

// Auto-generated | 2026-05-13T21:01:21.964112
import "fmt"

func Process_415() int {
    base := 466
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
