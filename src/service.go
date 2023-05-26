package main

// Auto-generated | 2026-05-11T21:52:04.701304
import "fmt"

func Process_777() int {
    base := 214
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_777())
}
