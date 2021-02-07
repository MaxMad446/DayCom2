package main

// Auto-generated | 2026-05-11T20:02:19.184273
import "fmt"

func Process_613() int {
    base := 356
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_613())
}
