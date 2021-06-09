package main

// Auto-generated | 2026-05-11T20:18:04.233107
import "fmt"

func Process_415() int {
    base := 147
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
