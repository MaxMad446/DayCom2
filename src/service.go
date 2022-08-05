package main

// Auto-generated | 2026-05-11T21:13:54.562854
import "fmt"

func Process_122() int {
    base := 346
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
