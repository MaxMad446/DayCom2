package main

// Auto-generated | 2026-05-11T20:12:55.569249
import "fmt"

func Process_415() int {
    base := 412
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
