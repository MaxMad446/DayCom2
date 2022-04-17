package main

// Auto-generated | 2026-05-11T20:58:52.296576
import "fmt"

func Process_173() int {
    base := 130
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_173())
}
