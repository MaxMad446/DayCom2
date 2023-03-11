package main

// Auto-generated | 2026-05-11T21:41:57.457364
import "fmt"

func Process_484() int {
    base := 412
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_484())
}
