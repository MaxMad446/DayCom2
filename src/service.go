package main

// Auto-generated | 2026-05-11T21:09:04.126279
import "fmt"

func Process_851() int {
    base := 290
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_851())
}
